#pragma once
#include <vector>
#include <string>
#include <unordered_map>

struct AnimFilterConfig {
	struct AnimFilterHotkey {
		int KeyCode;
		bool Ctrl;
		bool Shift;
		bool Alt;
	};
	struct AnimFilterProfile {
		std::string Name;
		std::wstring Text;
		bool HideTree = false;
		bool HideTimeDistortion = false;
		bool HideTaxi = false;
		bool HideGlobalItemSkills = false;
		bool HideSoulCores = false;
		struct EffectOption {
			unsigned __int64 Key;
			std::string Alias;
			bool IsAlias;
		};
		struct SkillOption {
			std::wstring Name;
			bool HideSpec1 = false;
			bool HideSpec2 = false;
			bool HideSpec3 = false;
			bool IsHideAll() const {
				return HideSpec1 && HideSpec2 && HideSpec3;
			}
			bool IsHideAny() const {
				return HideSpec1 || HideSpec2 || HideSpec3;
			}
		};
		struct SwapOption {
			__int32 TargetSkillId;
			__int32 AnimationSkillId;
			__int32 AnimationSkillVariation;
		};
		struct EffectSwapOption {
			int TargetEffectId;
			int AnimationEffectId;
		};
		std::vector<EffectOption> EffectFilters;
		std::vector<SkillOption> SkillFilters;
		std::unordered_map<__int32, SwapOption> AnimationSwaps;
		std::unordered_map<int, EffectSwapOption> EffectSwaps;
		SkillOption GetJobSkillOption(std::wstring_view jobName) const {
			for (const auto& skillOption : SkillFilters) {
				if (skillOption.Name == jobName) {
					return skillOption;
				}
			}
			return SkillOption();
		}
	};
	bool Enabled;
	bool ExperimentalMemoryLoading;
	AnimFilterHotkey ReloadKey;
	AnimFilterHotkey Profile1;
	AnimFilterHotkey Profile2;
	AnimFilterHotkey Profile3;
	AnimFilterHotkey Profile4;
	AnimFilterHotkey Profile5;
	std::unordered_map<int, AnimFilterProfile> Profiles;
	AnimFilterProfile ActiveProfile;
};