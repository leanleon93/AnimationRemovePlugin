#pragma once
#include "Data.h"
#include "./Records/Skillshow3/SkillShow3Base.h"
#include <unordered_set>
#include <unordered_map>
#include <string>
#include "./Records/Job/JobRecordBase.h"

class EffectRemover {
private:
	__int64 const* dataManagerPtr;
	std::unordered_set<int> idsToFilter;
	std::unordered_map<std::string, std::wstring> jobNameMap;
	std::unordered_map<unsigned __int64, std::unordered_map<std::wstring, wchar_t>> skillShowRestorationMap;
	void RemoveEffectsForIds(DrDataTable* table, const std::unordered_set<int>& ids);
	void TrySetWcharEmpty(const Data::Skillshow3Record::Key& recordKey, wchar_t* attribute, std::wstring const& attributeName);
	void RemoveEffectEntriesFromSkillshow3(Data::Skillshow3Record* record);
	void RestoreAllSkillShow3Records(DrDataTable* table);
	std::unordered_set<Data::JobRecord> GetJobRecords();
public:
	__int16 skillshowTableId;
	EffectRemover() = default;
	explicit EffectRemover(__int64 const* dataManagerPtr);
	bool RemoveEffects();
	void RestoreEffects();
	static __int64 BuildKey(__int32 id_, __int16 variation_id_, __int16 skillskin_id_);
	static Data::Skillshow3Record::Key ExtractKey(__int64 key);
	bool SetupIdsToFilter();
	std::unordered_set<int> GetIdsToFilter() const;
	Data::DataManager* GetDataManager();
};