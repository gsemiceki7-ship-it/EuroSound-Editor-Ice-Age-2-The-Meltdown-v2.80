#pragma once

#ifdef __cplusplus
extern "C" {
#endif

// Example function prototype from MusX DLL (replace with actual exported functions as needed)
void MusX_Init();
void MusX_Shutdown();
int  MusX_LoadBank(const char* bankFile);
void MusX_PlayTrack(int trackID);
void MusX_StopTrack(int trackID);

#ifdef __cplusplus
}
#endif