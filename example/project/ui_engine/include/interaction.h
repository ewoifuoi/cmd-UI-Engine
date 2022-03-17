#pragma once

#ifndef INIT

#include<ui_engine.h>
#include<Windows.h>
using namespace std;

struct Button{
    string word;
    int x; int y;
    int color;
    int val;
    void (*func)();
};

// 界面初始化宏
#define INIT \
    system("CLS");\
    HideCursor();\
    HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);\
	CONSOLE_CURSOR_INFO cursor;\
	SetConsoleCursorInfo(handle, &cursor);\
	CONSOLE_FONT_INFOEX ConsoleCurrentFontEx = { 0 };\
	ConsoleCurrentFontEx.cbSize = sizeof(ConsoleCurrentFontEx);\
	ConsoleCurrentFontEx.nFont = 700;\
	ConsoleCurrentFontEx.dwFontSize.X = 11;\
	ConsoleCurrentFontEx.dwFontSize.Y = 24;\
	ConsoleCurrentFontEx.FontFamily = TMPF_VECTOR;\
	ConsoleCurrentFontEx.FontWeight = 700;\
	SetCurrentConsoleFontEx(handle, FALSE, &ConsoleCurrentFontEx);\
	cursor.bVisible = FALSE;\
	cursor.dwSize = sizeof(cursor);\
	SetConsoleCursorInfo(handle, &cursor);\
	COORD size = { 200,200 };\
	if (!SetConsoleScreenBufferSize(handle, size)) {\
		cout << "failed" << endl;\
	}\
	SMALL_RECT r = { 0,0,60,20 };\
	if (!SetConsoleWindowInfo(handle, true, &r)) {\
		cout << "windows failed !";\
    }

#endif