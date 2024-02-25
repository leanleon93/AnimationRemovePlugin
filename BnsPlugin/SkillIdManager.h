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
		char JobId = -1;
		std::unordered_map<int, std::unordered_set<int>> SkillIdsForSpec;
	};
	struct EffectIdsForJob {
		char JobId = -1;
		std::unordered_map<int, std::unordered_set<unsigned __int64>> EffectIdsForSpec;
	};
public:
	__int16 GetSkillshowTableId() const;
	bool Setup();
	bool IsSetupComplete() const;
	bool IsCriticalFail() const;
	void ResetIdsToFilter();
	const std::unordered_set<int>& GetIdsToFilter() const;
	const std::unordered_set<int>& GetTaxiSkillIds() const;
	const std::unordered_map<__int32, __int16>& GetTaxiExclusionIdVariations() const;
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
	bool CriticalFail;
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

	const std::unordered_set<int> bardTreeExclusionIds = {
		242500,
		242501,
		242502,
		242503,
		242504,
		242505,
		242506,
		242507
	};

	const std::unordered_set<int> defaultTaxiExclusionIds = {
		141190,
		142190,
		143290
	};

	const std::unordered_map<__int32, __int16> taxiExclusionIdVariations = {
		{ 141190, 9 },
		{ 142190, 9 },
		{ 143290, 5 }
	};

	const std::vector<std::string> skillNameExclusionList = {
		"Cursed Cry",
		"Cursed Surge",
		"Cursed Strike"
	};
	const std::unordered_map<char, EffectIdsForJob> fixedTargetEffectIds = {
		{ 6, { 6, {
			{ 1, { 26130068} },
			{ 2, { 26130069} }
		}}},
		{ 9, { 9, {
			{ 2, { 55170400, 28090040, 55170390, 55170151, 28090001}}
		}}},
		{ 14, { 14, {
			{ 2, { 34500000}}
		}}},
		{ 12, { 12, {
			{ 3, { 33800095, 33800048}}
		}}},
	};
	std::unordered_set<char> jobIds;
	std::unordered_map<std::wstring, char> jobNameMap;
	std::unordered_map<char, SkillIdsForJob> skillIdsForJobMap;
	std::unordered_map<char, EffectIdsForJob> effectIdsForJobMap;
	std::unordered_set<int> GetAllSkillIdsFromJobMap();
	std::unordered_set<int> idsToFilter;
	std::unordered_set<unsigned __int64> effectIdsToFilter;
	std::unordered_set<int> taxiExclusionIds;
	void ResetEffectIdsToFilter();
	std::unordered_map<unsigned __int64, std::unordered_map<std::string, wchar_t>> effectRestoreList;
	char GetJobIdForEnName(std::wstring const& enName);
	bool SetupJobNameMap();
	bool SetupAllSkillIds();
	bool SetupSkillShowTableId();
	bool SetupSkillIdsForJob(char jobId);
	bool SetupEffectIdsForJob(char jobId);
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
	std::unordered_set<unsigned __int64> GetEffectIdsForEffectGroup(unsigned __int64 effectGroupId);
	bool CompatabilityCheck();
	const std::unordered_set<std::wstring> usedTables = {
		L"skillshow3",
		L"effect",
		L"job",
		L"skill3",
		L"skill-trait",
		L"itemskill",
		L"skill-inheritance",
		L"effect-group"
	};

	const std::unordered_map<std::wstring, __int32> confirmedMajorMinorVersions = {
		{ L"skillshow3", 655362 },
		{ L"effect", 34 },
		{ L"job", 3997696 },
		{ L"skill3", 65546 },
		{ L"skill-trait", 720896 },
		{ L"itemskill", 851968 },
		{ L"skill-inheritance", 262144 },
		{ L"effect-group", 458752 }
	};

	std::unordered_map<std::wstring, bool> versionCheckSuccess = {
		{ L"skillshow3", false },
		{ L"effect", false },
		{ L"job", false },
		{ L"skill3", false },
		{ L"skill-trait", false },
		{ L"itemskill", false },
		{ L"skill-inheritance", false },
		{ L"effect-group", false } };

	const std::unordered_set<char> jobIdsFallback = {
		1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 14, 15, 16
	};
	const std::unordered_map<std::wstring, char> jobNameFallbackMap = {
		{ L"Blade Master", 1 },
		{ L"Kung Fu Master", 2 },
		{ L"Force Master", 3 },
		{ L"Gunslinger", 4 },
		{ L"Destroyer", 5 },
		{ L"Summoner", 6 },
		{ L"Assassin", 7 },
		{ L"Blade Dancer", 8 },
		{ L"Warlock", 9 },
		{ L"Soul Fighter", 10 },
		{ L"Warden", 11 },
		{ L"Zen Archer", 12 },
		{ L"Astromancer", 14 },
		{ L"Dual Blade", 15 },
		{ L"Musician", 16 }
	};
	bool AllVersionsSuccess() const;
};

extern SkillIdManager g_SkillIdManager;