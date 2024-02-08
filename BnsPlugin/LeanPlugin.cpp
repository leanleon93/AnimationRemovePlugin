#pragma once
#include <thread>
#include <pe/module.h>
#include "detours.h"
#include "LeanPlugin.h"
#include <iostream>
#include "searchers.h"
#include "Hooks.h"
#include "xorstr.hpp"
#include "PluginConfig.h"
#include "Data.h"
#include "Records/Skillshow3/SkillShow3Base.h"
#include <functional>
#include "EffectRemover.h"

gsl::span<uint8_t> data;
pe::module* module;
uintptr_t handle;

const std::unique_ptr<PluginConfig> pluginConfig = std::make_unique<PluginConfig>();

void WINAPI ScannerSetup() {
#ifdef _DEBUG
	std::cout << "ScannerSetup" << std::endl;
#endif // _DEBUG
	module = pe::get_module();
	handle = module->handle();
	const auto sections2 = module->segments();
	const auto& s2 = std::find_if(sections2.begin(), sections2.end(), [](const IMAGE_SECTION_HEADER& x) {
		return x.Characteristics & IMAGE_SCN_CNT_CODE;
		});
	data = s2->as_bytes();
}

void WINAPI InitConfigValues() {
	pluginConfig->ReloadFromConfig();
}

/// <summary>
/// </summary>
/// <typeparam name="FuncType"></typeparam>
/// <param name="pattern"></param>
/// <param name="offset"></param>
/// <param name="originalFunction"></param>
/// <param name="hookFunction"></param>
/// <param name="debugName"></param>
/// <returns></returns>
template<typename FuncType>
uintptr_t HookFunction(const char* pattern, int offset, FuncType& originalFunction, FuncType hookFunction, const char* debugName)
{
	if (auto it = std::search(data.begin(), data.end(), pattern_searcher(pattern)); it != data.end()) {
		uintptr_t address = (uintptr_t)&it[0] + offset;
#ifdef _DEBUG
		printf("Address of %s is %p\n", debugName, (void*)address);
		std::cout << std::endl;
#endif // _DEBUG
		originalFunction = module->rva_to<std::remove_pointer_t<FuncType>>(address - handle);
		DetourAttach(&(PVOID&)originalFunction, hookFunction);
		return address;
	}
	return 0;
}

/// <summary>
/// </summary>
/// <typeparam name="FuncType"></typeparam>
/// <param name="pattern"></param>
/// <param name="offset"></param>
/// <param name="originalFunction"></param>
/// <param name="debugName"></param>
/// <returns></returns>
template<typename FuncType>
uintptr_t HookFunction(const char* pattern, int offset, FuncType& originalFunction, const char* debugName)
{
	if (auto it = std::search(data.begin(), data.end(), pattern_searcher(pattern)); it != data.end()) {
		uintptr_t address = (uintptr_t)&it[0] + offset;
#ifdef _DEBUG
		printf("Address of %s is %p\n", debugName, (void*)address);
		std::cout << std::endl;
#endif // _DEBUG
		originalFunction = module->rva_to<std::remove_pointer_t<FuncType>>(address - handle);
		return address;
	}
	return 0;
}

static __int64* HookDataManager(const char* pattern, int offset2) {
	if (auto it = std::search(data.begin(), data.end(), pattern_searcher(pattern)); it != data.end()) {
		const auto aAddress = reinterpret_cast<uintptr_t>(&it[0]);
#ifdef _DEBUG
		printf("Address of %s is %p\n", "aAddress", (void*)aAddress);
		std::cout << std::endl;
#endif // _DEBUG
		uintptr_t offset_addr = aAddress + offset2;
#ifdef _DEBUG
		printf("Address of %s is %p\n", "offset_addr", (void*)offset_addr);
		std::cout << std::endl;
#endif // _DEBUG

		int offset = *reinterpret_cast<unsigned int*>(offset_addr);
#ifdef _DEBUG
		printf("offset is %d\n", offset);
		std::cout << std::endl;
#endif // _DEBUG
		uintptr_t aData_DataManager_Effect = (offset_addr + offset + 4);

		uintptr_t dataManagerOffsetAddress = aData_DataManager_Effect + 3;
		int dataManagerOffset = *reinterpret_cast<unsigned int*>(dataManagerOffsetAddress);
		uintptr_t dataManagerAddress = dataManagerOffsetAddress + dataManagerOffset + 4;
		auto dataManagerPointer = reinterpret_cast<__int64*>(dataManagerAddress);

		oData_DataManager_Effect = module->rva_to<std::remove_pointer_t<decltype(oData_DataManager_Effect)>>(aData_DataManager_Effect - handle);
#ifdef _DEBUG
		printf("Address of %s is %p\n", "DataManagerEffect", (void*)aData_DataManager_Effect);
		std::cout << std::endl;
#endif // _DEBUG
		return dataManagerPointer;
	}
	return nullptr;
}

static __int64* WINAPI InitDetours() {
#ifdef _DEBUG
	std::cout << "InitDetours" << std::endl;
#endif // _DEBUG
	DetourTransactionBegin();
	DetourUpdateThread(NtCurrentThread());

	if (auto result = std::search(data.begin(), data.end(), pattern_searcher(xorstr_("66 89 54 24 10 48 89 4C 24 08 57 48 81 EC 10 02 00 00 48 C7 84 24 B8 00 00 00 FE FF FF FF"))); result != data.end()) {
		auto address = GetAddress(((uintptr_t)&result[0] + 0x38), 1, 5);
#ifdef _DEBUG
		printf("Address of %s is %p\n", "BNSClient_GetWorld", (void*)address);
		std::cout << std::endl;
#endif // _DEBUG
		BNSClient_GetWorld = module->rva_to<std::remove_pointer_t<decltype(BNSClient_GetWorld)>>(address - handle);
		DetourAttach(&(PVOID&)BNSClient_GetWorld, &hkBNSClient_GetWorld);
	}

	HookFunction(xorstr_("0F B6 47 18 48 8D 4C 24 30 89 03"), -0x38, oBInputKey, &hkBInputKey, "aBinput");
	HookFunction(xorstr_("40 53 48 83 EC 20 48 C7 01 00 00 00 00 48 8B D9 48 85 D2 74"), 0, oDrElIter_DrElIter, "aDrElIter_DrElIter");
	auto pattern = xorstr_("0F B6 C0 85 C0 75 07 32 C0 E9 67 07 00 00 E8 ?? ?? ?? ?? 48 ?? ?? ?? ?? 00 00 00 48 ?? ?? ?? ?? 00 00 00 48 8B 00 48 8B ?? ?? ?? ?? 00 00 48 8B ?? ?? ?? ?? 00 00 FF 90 B8 00 00 00 48 8B D0 48 ?? ?? ?? ??");
	auto dataManagerPtr = HookDataManager(pattern, 0xF);

	DetourTransactionCommit();
	return dataManagerPtr;
}

EffectRemover effectRemover;

static void InitSkillshowRemove() {
	while (true) {
		if (effectRemover.RemoveEffects()) {
			break;
		}
		std::this_thread::sleep_for(std::chrono::milliseconds(1000));
	}
}

static void WINAPI LeanPlugin_Init()
{
	InitConfigValues();
	ScannerSetup();
	const auto dataManagerPtr = InitDetours();
	effectRemover = EffectRemover(dataManagerPtr);
	if (dataManagerPtr != nullptr) {
		std::jthread skillShowThread(InitSkillshowRemove);
		skillShowThread.detach();
	}
}

void WINAPI LeanPlugin_Main()
{
#ifdef _DEBUG
	//Open console and print (testing)
	AllocConsole();
	(void)freopen_s((FILE**)stdout, "CONOUT$", "w", stdout);  //insecure
	std::cout << "InitNotification: BNSR.exe" << std::endl;
#endif
	static std::once_flag once;

	std::call_once(once, LeanPlugin_Init);
}