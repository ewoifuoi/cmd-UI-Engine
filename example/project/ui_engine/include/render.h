#pragma once

#ifndef RENDER
#define RENDER
#include<ui_engine.h>
using namespace std;

extern string char_list[20001];
#define LINE 1
#define SQUARE 0


#define black       0
#define blue        1
#define green       2
#define aqua        3
#define red         4
#define purple      5
#define yellow      6
#define white       7
#define gray        8
#define blue_l      9
#define green_l     10
#define aqua_l      11
#define red_l       12
#define purple_l    13
#define yellow_l    14
#define white_b     15



// 界面初始化宏
#define INIT \
    system("CLS");\
    HideCursor();\
    HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);\
	CONSOLE_CURSOR_INFO cursor;\
	SetConsoleCursorInfo(handle, &cursor);\
	CONSOLE_FONT_INFOEX ConsoleCurrentFontEx = { 0 };\
	ConsoleCurrentFontEx.cbSize = sizeof(ConsoleCurrentFontEx);\
	ConsoleCurrentFontEx.nFont = 500;\
	ConsoleCurrentFontEx.dwFontSize.X = 11;\
	ConsoleCurrentFontEx.dwFontSize.Y = 24;\
	ConsoleCurrentFontEx.FontFamily = TMPF_VECTOR;\
	ConsoleCurrentFontEx.FontWeight = 50;\
	SetCurrentConsoleFontEx(handle, FALSE, &ConsoleCurrentFontEx);\
	cursor.bVisible = FALSE;\
	cursor.dwSize = sizeof(cursor);\
	SetConsoleCursorInfo(handle, &cursor);\
	COORD size = { 125,30};\
	if (!SetConsoleScreenBufferSize(handle, size)) {\
		cout << "failed" << endl;\
	}\
	SMALL_RECT r = { 0,0,82,22 };\
	if (!SetConsoleWindowInfo(handle, true, &r)) {\
		cout << "windows failed !";\
    }


#define INIT_NORMAL \
    system("CLS");\
    HideCursor();\
    HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);\
	CONSOLE_CURSOR_INFO cursor;\
	SetConsoleCursorInfo(handle, &cursor);\
	CONSOLE_FONT_INFOEX ConsoleCurrentFontEx = { 0 };\
	SetCurrentConsoleFontEx(handle, FALSE, &ConsoleCurrentFontEx);\
	cursor.bVisible = FALSE;\
	cursor.dwSize = sizeof(cursor);\
	SetConsoleCursorInfo(handle, &cursor);\
	COORD size = { 125,30};\
	if (!SetConsoleScreenBufferSize(handle, size)) {\
		cout << "failed" << endl;\
	}\
	SMALL_RECT r = { 0,0,82,22 };\
	if (!SetConsoleWindowInfo(handle, true, &r)) {\
		cout << "windows failed !";\
    }\
	int pointer = 0;\



#endif