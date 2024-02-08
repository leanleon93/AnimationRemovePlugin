#pragma once

#include <cstdint>

class PluginConfig {
public:
	int32_t ForegroundLimit;
	int32_t BackgroundLimit;
	PluginConfig();
	void ReloadFromConfig();
private:
	void Initialize();
};