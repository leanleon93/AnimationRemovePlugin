#pragma once
#include <unordered_set>
#include <unordered_map>
#include <string>
#include "Records/Skillshow3/SkillShow3Base.h"
#include "Data.h"
#include "Records/SkillTrait/SkillTraitRecordBase.h"
#include "Records/Effect/EffectRecordBase.h"

class SkillIdManager {
	struct SkillIdsForJob {
		std::wstring EnJobName;
		std::unordered_map<int, std::unordered_set<int>> SkillIdsForSpec;
		std::unordered_set<int> SharedSkillIds;
	};
	struct EffectIdsForJob {
		std::wstring EnJobName;
		std::unordered_map<int, std::unordered_set<unsigned __int64>> EffectIdsForSpec;
	};
public:
	__int16 GetSkillshowTableId() const;
	bool Setup();
	bool IsSetupComplete() const;
	void ResetIdsToFilter();
	const std::unordered_set<int>& GetIdsToFilter() const;
	Data::DataManager* GetDataManager();
	static struct SkillShow3KeyHelper {
		static __int64 BuildKey(__int32 id_, __int16 variation_id_, __int16 skillskin_id_);
		static Data::Skillshow3Record::Key ExtractKey(__int64 key);
		static __int32 ExtractId(__int64 key);
	};
	void SetDataManagerPtr(__int64 const* ptr);
	void ReapplyEffectFilters();
private:
	__int16 skillshowTableId;
	__int64 const* dataManagerPtr;
	bool SetupComplete;
	const std::vector<int> idExclusionList = {
		66104,
		66105,
		66106,
		66022,
		66020,
		66021,
		66023,
		66024,
		66050
	};
	const std::vector<std::string> skillNameExclusionList = {
		"Cursed Cry",
		"Cursed Surge",
		"Cursed Strike"
	};
	const std::unordered_map<std::wstring, EffectIdsForJob> fixedTargetEffectIds = {
		{ L"Summoner", { L"Summoner", {
			{ 1, { 26130068} },
			{ 2, { 26130069} }
		}}},
		{ L"Warlock", { L"Warlock", {
			{ 2, { 55170400, 28090040, 55170390, 55170151, 28090001}}
		}}},
		{ L"Astromancer", { L"Astromancer", {
			{ 2, { 34500000}}
		}}},
		{ L"Zen Archer", { L"Zen Archer", {
			{ 3, { 33800095, 33800048}}
		}}},
	};
	std::unordered_map<std::wstring, char> jobNameMap;
	std::unordered_map<std::wstring, SkillIdsForJob> skillIdsForJobMap;
	std::unordered_map<std::wstring, EffectIdsForJob> effectIdsForJobMap;
	std::unordered_set<int> GetAllSkillIdsFromJobMap();
	std::unordered_set<int> idsToFilter;
	std::unordered_set<unsigned __int64> effectIdsToFilter;
	void ResetEffectIdsToFilter();
	std::unordered_map<unsigned __int64, std::unordered_map<std::string, wchar_t>> effectRestoreList;
	char GetKrJobForEnName(std::wstring const& enName);
	bool SetupJobNameMap();
	bool SetupAllSkillIds();
	bool SetupSkillShowTableId();
	bool SetupSkillIdsForJob(const std::wstring& enName, char krName);
	bool SetupEffectIdsForJob(const std::wstring& enName, char krName);
	void AddIds(Data::SkillTraitRecord const* record, int const* ids, int size, SkillIdsForJob& skillIdsForJobEntry);
	void AddFixedIds(Data::SkillTraitRecord const* record, SkillIdsForJob& skillIdsForJobEntry);
	void AddVariableIds(Data::SkillTraitRecord const* record, SkillIdsForJob& skillIdsForJobEntry);
	std::unordered_set<int> GetInheritedIds(int id);
	void AddChildrenSkillIds(SkillIdsForJob& skillIdsForJobEntry);
	std::unordered_set<int> GetChildSkillIds(int id);
	void FilterBracelet(SkillIdsForJob& skillIdsForJobEntry);
	bool IsBraceletId(int id);
	void AddItemSkills(SkillIdsForJob& skillIdsForJobEntry);
	std::unordered_set<int> GetItemSkills(int id);
	void RestoreEffects();
	void RemoveEffects();
	void RemoveAnimationsForEffect(Data::EffectRecord* effectRecord);
};

extern SkillIdManager g_SkillIdManager;