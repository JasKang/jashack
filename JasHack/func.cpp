#include "stdafx.h"
#include "func.h"


//************************************
// ��������: FChat ���������ı� 
// �� �� �ߣ�JasKang
// �������ڣ�2014/12/25
// �� �� ֵ: void 
// ��    ��: const char * text ��������
// ��    ��: bool isall �Ƿ�������˷���
//************************************
void FChat(const char* text,bool isall)
{
	SetClipBoardText(text);
	if (isall)
	{
		SendMessage(wHandle,WM_KEYDOWN,VK_SHIFT,0);
		SendMessage(wHandle,WM_KEYDOWN,VK_RETURN,0);
		SendMessage(wHandle,WM_KEYUP,VK_RETURN,0);
		SendMessage(wHandle,WM_KEYUP,VK_SHIFT,0);
		SendMessage(wHandle,WM_KEYDOWN,VK_CONTROL,0);
		SendMessage(wHandle,WM_KEYDOWN,0x56,0);
		SendMessage(wHandle,WM_KEYUP,0x56,0);
		SendMessage(wHandle,WM_KEYUP,VK_CONTROL,0);
		SendMessage(wHandle,WM_KEYDOWN,VK_RETURN,0);
		SendMessage(wHandle,WM_KEYUP,VK_RETURN,0);
	} 
	else
	{
		SendMessage(wHandle,WM_KEYDOWN,VK_RETURN,0);
		SendMessage(wHandle,WM_KEYUP,VK_RETURN,0);
		SendMessage(wHandle,WM_KEYDOWN,VK_CONTROL,0);
		SendMessage(wHandle,WM_KEYDOWN,0x56,0);
		SendMessage(wHandle,WM_KEYUP,0x56,0);
		SendMessage(wHandle,WM_KEYUP,VK_CONTROL,0);
		SendMessage(wHandle,WM_KEYDOWN,VK_RETURN,0);
		SendMessage(wHandle,WM_KEYUP,VK_RETURN,0);
	}
}


