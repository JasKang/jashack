#pragma once


struct Command
{
	DWORD _6F942254;
	DWORD IDUNCARE[8];
	DWORD CommandId;
	DWORD UNK[8];
	float X;
	DWORD UNK1;
	float Y;
};

enum Cmd
{
	MOVE=0xD0003,	//�ƶ�
	ATTACK=0xD000F,	//����
	HOLD=0xD0019,	//ֹͣ H
	STOP=0xD0004,	//ֹͣ S
	Action_T=0xD009F, //�ŷɵ�ΤT
	ITEM1=0xD0028, //��Ʒ1
	ITEM2=0xD0029, //��Ʒ2
	ITEM3=0xD002A, //��Ʒ3
	ITEM4=0xD002B, //��Ʒ4
	ITEM5=0xD002C, //��Ʒ5
	ITEM6=0xD002D, //��Ʒ6
	Action_41_E=0xD024B,	//˾��E
	Action_ZG_E=0xD0270,	//ZG E
	Action_ZF_V=0xD0076,	//�ŷ� ����
	Action_CR_E=0xD0103,	//���� ˯
	Action_CR_G=0xD0270,	//���� ����
	Action_XUN_W=0xD0218,	//���� ���ν��
	Action_GJ_C=0xD024B,	//���� ���ӱ�����
	Action_GY_X=0xD0107,	//���� ʮ��ն
	Action_GY_D=0xD0079,	//���� D
	Action_GY_B=0xD00A0,	//���� B
};

#define HERO_ID_ZG	0x48303038  //���
#define HERO_ID_ZF	0x4F303032	//�ŷ�
#define HERO_ID_GY	0x4F303033	//����

#define HERO_ID_DW	0x48303036  //��Τ
#define HERO_ID_CR	0x55303037  //CR
#define HERO_ID_XUN	0x55303049  //����
#define HERO_ID_GJ	0x55303030  //����

#define ITEM_XX		0x64657363	//��Ь
#define ITEM_XW		0x49303243	//����
#define ITEM_FX		0x49303150	//����
#define ITEM_FZ		0x736E6567  //�籩֮��
#define ITEM_YZ		0x7373616E  //����


void UnitCommandON();
