// stdafx.h : ��׼ϵͳ�����ļ��İ����ļ���
// ���Ǿ���ʹ�õ��������ĵ�
// �ض�����Ŀ�İ����ļ�
//

#pragma once

#include "targetver.h"

#define WIN32_LEAN_AND_MEAN             //  �� Windows ͷ�ļ����ų�����ʹ�õ���Ϣ
// Windows ͷ�ļ�:
#include <windows.h>
#include <iostream>
#include <Process.h>
#include <stdio.h>
#include <string.h>
#include <process.h>
#include <TlHelp32.h>
#include <map>
#include <list>
#include <string>
using namespace std;

#define M_PI 3.141592653589793238462643
#define deg2rad(a) ((a)*M_PI/180)

// TODO: �ڴ˴����ó�����Ҫ������ͷ�ļ�s
#include "Tools.h"
#include "variables.h"
#include "func.h"
#include "Jass.h"

#include "MapPatch.h"
#include "Gamestate.h"
#include "HeroLine.h"
#include "UnitCommad.h"
#include "zResourceHook.h"
#include "ColoredInvi.h"
#include "GreyHP.h"
#include "DamageNotifier.h"

#include "NumShow.h"