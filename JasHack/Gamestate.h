#pragma once


#define GS_NOTHING 0	//��ҳ
#define GS_LOBBY 1		//����
#define GS_LOADING 3	//loading
#define GS_INGAME 4		//��Ϸ��
#define GS_PAUSEDGAME 6	//��ͣ

extern DWORD NowGamestate, OldGamestate;

bool ChangeLoadingBarText(char* newtext);
void GameStateInit();
