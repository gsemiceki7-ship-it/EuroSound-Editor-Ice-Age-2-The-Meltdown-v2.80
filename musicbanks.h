#pragma once

// Initializes the Musicbanks module.
void InitMusicbanks();

// Loads music banks from file.
bool LoadMusicbanks(const char* filepath);

// Saves current music banks to file.
bool SaveMusicbanks(const char* filepath);

// Releases resources used by Musicbanks.
void CleanupMusicbanks();
