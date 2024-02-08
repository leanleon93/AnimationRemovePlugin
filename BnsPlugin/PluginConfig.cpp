#include "PluginConfig.h"
#include "SimpleIni.h"
#include "xorstr.hpp";
#include <filesystem>
#include <iostream>

PluginConfig::PluginConfig()
{
	Initialize();
}

void PluginConfig::Initialize()
{
	ForegroundLimit = 0;
	BackgroundLimit = 0;
}

void PluginConfig::ReloadFromConfig()
{
	std::wstring fullpath(MAX_PATH, L'\0');
	CSimpleIniA hotkeys;
	hotkeys.SetUnicode();
	GetModuleFileNameW(nullptr, &fullpath[0], MAX_PATH);
	std::filesystem::path base(fullpath);
	std::wstring inipath(base.parent_path());
	inipath += xorstr_(L"/plugins/fps.ini");
	const wchar_t* fullinipath = inipath.c_str();
#ifdef _DEBUG
	std::wcout << fullinipath << std::endl;
#endif // _DEBUG

	if (hotkeys.LoadFile(fullinipath) == -3) return;
	if (hotkeys.GetValue("FPS", "Foreground"))
	{
		ForegroundLimit = std::stoi(hotkeys.GetValue("FPS", "Foreground"));
	}
	if (hotkeys.GetValue("FPS", "Background"))
	{
		BackgroundLimit = std::stoi(hotkeys.GetValue("FPS", "Background"));
	}
}