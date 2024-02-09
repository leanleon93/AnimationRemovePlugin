#pragma once
#include <unordered_set>
#include <unordered_map>
#include <string>
#include "Records/Skillshow3/SkillShow3Base.h"
#include "Data.h"
#include "PluginConfig.h"
#include "Records/SkillTrait/SkillTraitRecordBase.h"

class SkillIdManager {
	struct SkillIdsForJob {
		std::wstring EnJobName;
		std::unordered_map<int, std::unordered_set<int>> SkillIdsForSpec;
		std::unordered_set<int> SharedSkillIds;
	};
public:
	__int16 skillshowTableId;
	bool Setup();
	bool IsSetupComplete() const;
	void ResetIdsToFilter();
	std::unordered_set<int> GetIdsToFilter() const;
	Data::DataManager* GetDataManager();
	struct SkillShow3KeyHelper {
		static __int64 BuildKey(__int32 id_, __int16 variation_id_, __int16 skillskin_id_);
		static Data::Skillshow3Record::Key ExtractKey(__int64 key);
	};
	SkillShow3KeyHelper SkillShow3KeyHelper;
	void SetDataManagerPtr(__int64 const* ptr);
private:
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
	char GetKrJobForEnName(std::wstring const& enName);
	bool SetupJobNameMap();
	bool SetupAllSkillIds();
	bool SetupSkillShowTableId();
	bool SetupSkillIdsForJob(const std::wstring& enName, char krName);

	void AddIds(Data::SkillTraitRecord* record, int* ids, int size, SkillIdsForJob& skillIdsForJobEntry);
	void AddFixedIds(Data::SkillTraitRecord* record, SkillIdsForJob& skillIdsForJobEntry);
	void AddVariableIds(Data::SkillTraitRecord* record, SkillIdsForJob& skillIdsForJobEntry);
	std::unordered_set<int> GetInheritedIds(int id);
	void AddChildrenSkillIds(SkillIdsForJob& skillIdsForJobEntry);
	std::unordered_set<int> GetChildSkillIds(int id);
	void FilterBracelet(SkillIdsForJob& skillIdsForJobEntry);
	bool IsBraceletId(int id);
	void AddItemSkills(SkillIdsForJob& skillIdsForJobEntry);
	std::unordered_set<int> GetItemSkills(int id);
};

extern SkillIdManager g_SkillIdManager;