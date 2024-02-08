#pragma once
#include "Data.h"
#include "./Records/Skillshow3/SkillShow3Base.h"
#include <unordered_set>
#include <unordered_map>
#include <string>

class EffectRemover {
private:
	__int64 const* dataManagerPtr;
	std::unordered_map<unsigned __int64, std::unordered_map<std::wstring, wchar_t>> skillShowRestorationMap;
	void RemoveEffectsForIds(DrDataTable* table, const std::unordered_set<int>& ids);
	void TrySetWcharEmpty(const Data::Skillshow3Record::Key& recordKey, wchar_t* attribute, std::wstring const& attributeName);
	void RemoveEffectEntriesFromSkillshow3(Data::Skillshow3Record* record);
	void RestoreAllSkillShow3Records(DrDataTable const* table);
public:
	EffectRemover() = default;
	explicit EffectRemover(__int64 const* dataManagerPtr);
	bool RemoveEffects();
	void RestoreEffects();
};