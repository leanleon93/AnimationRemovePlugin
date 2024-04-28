#include "PluginConfig.h"
#include "pugixml/pugixml.hpp"
#ifdef _DEBUG
#include <iostream>
#endif // _DEBUG

PluginConfig g_PluginConfig;

PluginConfig::PluginConfig()
{
	Initialize();
}

void PluginConfig::Initialize()
{
	AnimFilterConfig = {};
	ConfigPath = PluginConfig::GetDocumentsDirectory() + "\\BnS\\animfilter_config.xml";
}

std::string PluginConfig::GetDocumentsDirectory() {
	if (const char* userProfile = std::getenv("USERPROFILE"); userProfile != nullptr) {
		return std::string(userProfile) + "\\Documents";
	}
	return "";
}

static void SetHotkey(pugi::xml_node const* node, AnimFilterConfig::AnimFilterHotkey* hotkey) {
	auto hotkeyStr = node->attribute("keyCode").as_string();
	int keyCode = std::stoi(hotkeyStr, nullptr, 16);
	hotkey->KeyCode = keyCode;
	hotkey->Ctrl = node->attribute("bCtrl").as_bool();
	hotkey->Shift = node->attribute("bShift").as_bool();
	hotkey->Alt = node->attribute("bAlt").as_bool();
}

static void SetProfileHotkeys(pugi::xml_document const& doc, AnimFilterConfig* animFilterConfig)
{
	for (pugi::xml_node globalOptionsNode : doc.child("config").child("options").children("option")) {
		auto name = globalOptionsNode.attribute("name").as_string();
		if (std::strcmp(name, "reloadKey") == 0) {
			SetHotkey(&globalOptionsNode, &animFilterConfig->ReloadKey);
		}
		if (std::strcmp(name, "profile_1") == 0) {
			SetHotkey(&globalOptionsNode, &animFilterConfig->Profile1);
		}
		if (std::strcmp(name, "profile_2") == 0) {
			SetHotkey(&globalOptionsNode, &animFilterConfig->Profile2);
		}
		if (std::strcmp(name, "profile_3") == 0) {
			SetHotkey(&globalOptionsNode, &animFilterConfig->Profile3);
		}
		if (std::strcmp(name, "profile_4") == 0) {
			SetHotkey(&globalOptionsNode, &animFilterConfig->Profile4);
		}
		if (std::strcmp(name, "profile_5") == 0) {
			SetHotkey(&globalOptionsNode, &animFilterConfig->Profile5);
		}
	}
}

static std::wstring PugiCharPtrToWString(const pugi::char_t* charPtr) {
	if (charPtr == nullptr) {
		return L"";
	}
	// Convert pugi::char_t* to char* first
	const char* utf8Str = charPtr;
	// Convert char* to std::wstring
	return std::wstring(utf8Str, utf8Str + strlen(utf8Str));
}

static void SetProfiles(pugi::xml_document const& doc, AnimFilterConfig* animFilterConfig) {
	for (pugi::xml_node profileNode : doc.child("config").child("profiles").children("profile")) {
		auto profileId = profileNode.attribute("name").as_int();
		AnimFilterConfig::AnimFilterProfile profile;
		profile.Name = profileNode.attribute("name").as_string();
		if (pugi::xml_node extraoptionsNode = profileNode.child("extra_options"); extraoptionsNode) {
			if (extraoptionsNode.attribute("hideTree") != nullptr) {
				profile.HideTree = extraoptionsNode.attribute("hideTree").as_bool();
			}
			if (extraoptionsNode.attribute("hideTD") != nullptr) {
				profile.HideTimeDistortion = extraoptionsNode.attribute("hideTD").as_bool();
			}
			if (extraoptionsNode.attribute("hideTaxi") != nullptr) {
				profile.HideTaxi = extraoptionsNode.attribute("hideTaxi").as_bool();
			}
		}
		if (pugi::xml_node textNode = profileNode.child("text"); textNode) {
			auto text = textNode.text();
			profile.Text = PugiCharPtrToWString(text.as_string());
		}
		for (pugi::xml_node effectOptionNode : profileNode.child("effect_options").children("option")) {
			AnimFilterConfig::AnimFilterProfile::EffectOption effectOption;

			auto isAlias = effectOptionNode.attribute("isAlias").as_bool();
			effectOption.IsAlias = isAlias;
			if (isAlias) {
				auto alias = effectOptionNode.attribute("alias").as_string();
				effectOption.Alias = std::string(alias);
			}
			else {
				auto key = effectOptionNode.attribute("key").as_ullong();
				effectOption.Key = key;
			}
			profile.EffectFilters.push_back(effectOption);
		}
		for (pugi::xml_node animSwapOptionNode : profileNode.child("swap_options").children("option")) {
			AnimFilterConfig::AnimFilterProfile::SwapOption swapOption{};
			auto targetSkillId = animSwapOptionNode.attribute("targetSkillId").as_int();
			swapOption.TargetSkillId = targetSkillId;
			auto animationSkillId = animSwapOptionNode.attribute("animationSkillId").as_int();
			swapOption.AnimationSkillId = animationSkillId;
			auto animationSkillVariation = animSwapOptionNode.attribute("animationSkillVariation").as_int();
			swapOption.AnimationSkillVariation = animationSkillVariation;
			profile.AnimationSwaps[targetSkillId] = swapOption;
		}
		for (pugi::xml_node skillOptionNode : profileNode.child("skill_options").children("option")) {
			AnimFilterConfig::AnimFilterProfile::SkillOption skillOption;
			auto name = skillOptionNode.attribute("name").as_string();
			skillOption.Name = PugiCharPtrToWString(name);
			skillOption.HideSpec1 = skillOptionNode.attribute("hideSpec1").as_bool();
			skillOption.HideSpec2 = skillOptionNode.attribute("hideSpec2").as_bool();
			skillOption.HideSpec3 = skillOptionNode.attribute("hideSpec3").as_bool();
			profile.SkillFilters.push_back(skillOption);
		}
		animFilterConfig->Profiles[profileId] = profile;
	}
}

void PluginConfig::ReloadFromConfig()
{
	pugi::xml_document doc;
	if (pugi::xml_parse_result result = doc.load_file(ConfigPath.string().c_str()); !result) {
#ifdef _DEBUG
		std::cerr << "Failed to load AnimFilter config file: " << result.description() << std::endl;
#endif // _DEBUG
		Loaded = false;
		return;
	}
	if (pugi::xml_node enabledNode = doc.child("config").child("enabled"); enabledNode) {
		AnimFilterConfig.Enabled = enabledNode.attribute("value").as_bool();
	}
	if (pugi::xml_node experimentalNode = doc.child("config").child("experimental-feature"); experimentalNode) {
		AnimFilterConfig.ExperimentalMemoryLoading = experimentalNode.attribute("value").as_bool();
	}
	SetProfileHotkeys(doc, &AnimFilterConfig);
	SetProfiles(doc, &AnimFilterConfig);
	SetActiveFilter(1);
	Loaded = true;
}

void PluginConfig::SetActiveFilter(int profileId)
{
	if (auto it = AnimFilterConfig.Profiles.find(profileId); it != AnimFilterConfig.Profiles.end()) {
		AnimFilterConfig.ActiveProfile = it->second;
	}
}

const AnimFilterConfig::AnimFilterProfile& PluginConfig::GetActiveProfile() const
{
	return this->AnimFilterConfig.ActiveProfile;
}

const AnimFilterConfig& PluginConfig::GetAnimFilterConfig() const
{
	return this->AnimFilterConfig;
}

bool PluginConfig::AnimFilterEnabled() const
{
	return this->AnimFilterConfig.Enabled;
}

bool PluginConfig::IsLoaded() const
{
	return Loaded;
}

bool PluginConfig::HasActiveProfile() const
{
	return !AnimFilterConfig.ActiveProfile.Name.empty();
}