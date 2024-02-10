#pragma once
#include <unordered_set>
#include <unordered_map>
#include <string>
#include "Records/Skillshow3/SkillShow3Base.h"
#include "Data.h"
#include "Records/SkillTrait/SkillTraitRecordBase.h"

class SkillIdManager {
	struct SkillIdsForJob {
		std::wstring EnJobName;
		std::unordered_map<int, std::unordered_set<int>> SkillIdsForSpec;
		std::unordered_set<int> SharedSkillIds;
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
	std::unordered_map<std::wstring, char> jobNameMap;
	std::unordered_map<std::wstring, SkillIdsForJob> skillIdsForJobMap;
	std::unordered_set<int> idsToFilter;
	std::unordered_map<unsigned __int64, std::unordered_map<std::string, wchar_t>> effectRestoreList;
	char GetKrJobForEnName(std::wstring const& enName);
	bool SetupJobNameMap();
	bool SetupAllSkillIds();
	bool SetupSkillShowTableId();
	bool SetupSkillIdsForJob(const std::wstring& enName, char krName);

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
};

extern SkillIdManager g_SkillIdManager;