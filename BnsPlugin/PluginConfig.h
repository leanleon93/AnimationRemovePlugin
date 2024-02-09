#pragma once
#include <cstdint>
#include "AnimFilterConfig.h"
#include <filesystem>

class PluginConfig {
public:
	AnimFilterConfig::AnimFilterProfile GetActiveProfile() const;
	AnimFilterConfig GetAnimFilterConfig() const;
	bool AnimFilterEnabled() const;
	PluginConfig();
	void ReloadFromConfig();
	void SetActiveFilter(int profileId);
	bool IsLoaded() const;
	bool HasActiveProfile() const;
private:
	std::filesystem::path ConfigPath;
	bool Loaded;
	AnimFilterConfig AnimFilterConfig;
	static std::string GetDocumentsDirectory();
	void Initialize();
};

extern PluginConfig g_PluginConfig;
