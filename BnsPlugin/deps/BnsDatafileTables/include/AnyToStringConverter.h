/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include <string>
#include <any>
#include <unordered_map>
#include "BnsCustomProperties.h"

namespace Data {
	class AnyFieldToStringConverter{
		public:
static std::wstring ToString(__int16* value) {
	auto val = *value;
	return std::to_wstring(val);
}
static std::wstring ToString(bool* value) {
	auto val = *value;
	return val ? L"true" : L"false";
}
static std::wstring ToString(__int8* value) {
	auto val = *value;
	return std::to_wstring(val);
}
static std::wstring ToString(wchar_t** value) {
	auto val = *value;
	return val;
}
static std::wstring ToString(__int64* value) {
	auto val = *value;
	return std::to_wstring(val);
}
static std::wstring ToString(__int32* value) {
	auto val = *value;
	return std::to_wstring(val);
}
static std::wstring ToString(float* value) {
	auto val = *value;
	return std::to_wstring(val);
}
static std::wstring ToString(Data::TableRef* value) {
	auto val = *value;
	return L"TableRef{Key=" + std::to_wstring(val.Key) + L"}";
}
static std::wstring ToString(Data::ExplicitTableRef* value) {
	auto val = *value;
	return L"ExplicitTableRef{TableId=" + std::to_wstring(val.TableId) + L", Key=" + std::to_wstring(val.Key) + L"}";
}
static std::wstring ToString(Data::IconRef* value) {
	auto val = *value;
	return L"IconRef{IcontextureId=" + std::to_wstring(val.IcontextureId) + L", IconIndex=" + std::to_wstring(val.IconIndex) + L"}";
}
static std::wstring ToString(Data::TextRef* value) {
	auto val = *value;
	return L"TextRef{Unk=" + std::to_wstring(val.Unk) + L", ReadableText=" + val.ReadableText + L"}";
}
static std::wstring ToString(Data::UnkFlag* value) {
	auto val = *value;
	return L"UnkFlag{Unk=NotImplemented}";
}
static std::wstring ToString(Data::RGB* value) {
	auto val = *value;
	return L"RGB{R=" + std::to_wstring(val.R) + L", G=" + std::to_wstring(val.G) + L", B=" + std::to_wstring(val.B) + L"}";
}
static std::wstring ToString(Data::XYZ* value) {
	auto val = *value;
	return L"XYZ{X=" + std::to_wstring(val.X) + L", Y=" + std::to_wstring(val.Y) + L", Z=" + std::to_wstring(val.Z) + L"}";
}

			static std::wstring AnyToString(std::any value) {
if(value.type() == typeid(__int16)) {
	auto val = std::any_cast<__int16>(value);
	return ToString(&val);
}
if(value.type() == typeid(bool)) {
	auto val = std::any_cast<bool>(value);
	return ToString(&val);
}
if(value.type() == typeid(__int8)) {
	auto val = std::any_cast<__int8>(value);
	return ToString(&val);
}
if(value.type() == typeid(wchar_t*)) {
	auto val = std::any_cast<wchar_t*>(value);
	return ToString(&val);
}
if(value.type() == typeid(__int64)) {
	auto val = std::any_cast<__int64>(value);
	return ToString(&val);
}
if(value.type() == typeid(__int32)) {
	auto val = std::any_cast<__int32>(value);
	return ToString(&val);
}
if(value.type() == typeid(float)) {
	auto val = std::any_cast<float>(value);
	return ToString(&val);
}
if(value.type() == typeid(Data::TableRef)) {
	auto val = std::any_cast<Data::TableRef>(value);
	return ToString(&val);
}
if(value.type() == typeid(Data::ExplicitTableRef)) {
	auto val = std::any_cast<Data::ExplicitTableRef>(value);
	return ToString(&val);
}
if(value.type() == typeid(Data::IconRef)) {
	auto val = std::any_cast<Data::IconRef>(value);
	return ToString(&val);
}
if(value.type() == typeid(Data::TextRef)) {
	auto val = std::any_cast<Data::TextRef>(value);
	return ToString(&val);
}
if(value.type() == typeid(Data::UnkFlag)) {
	auto val = std::any_cast<Data::UnkFlag>(value);
	return ToString(&val);
}
if(value.type() == typeid(Data::RGB)) {
	auto val = std::any_cast<Data::RGB>(value);
	return ToString(&val);
}
if(value.type() == typeid(Data::XYZ)) {
	auto val = std::any_cast<Data::XYZ>(value);
	return ToString(&val);
}

				return L"";
			}
	};
}