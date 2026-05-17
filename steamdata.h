#pragma once

// Initializes the Steamdata module.
void InitSteamdata();

// Loads steam data from file.
bool LoadSteamdata(const char* filepath);

// Saves steam data to file.
bool SaveSteamdata(const char* filepath);

// Cleans up the Steamdata module.
void CleanupSteamdata();