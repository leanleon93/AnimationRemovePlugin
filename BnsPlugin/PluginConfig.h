#pragma once
#include "AnimFilterConfig.h"
#include <filesystem>

class PluginConfig {
public:
	PluginConfig();
	const AnimFilterConfig::AnimFilterProfile& GetActiveProfile() const;
	const AnimFilterConfig& GetAnimFilterConfig() const;
	bool AnimFilterEnabled() const;
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
