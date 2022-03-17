
// 此 文件 内为 引擎 与 系统交互函数


#include<ui_engine.h>
using namespace std;

void goto_xy(short x, short y)
{   
    HANDLE hOut;
    hOut = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD pos = { x,y };
    SetConsoleCursorPosition(hOut, pos);
    return ;
}

void show_cursor() {
    HANDLE h_GAME =GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO cursor_info;
    GetConsoleCursorInfo(h_GAME,&cursor_info);
    cursor_info.bVisible=true;
    SetConsoleCursorInfo(h_GAME,&cursor_info);
}

void set_console_color(unsigned short color_index) {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color_index);
    return ;
}

void HideCursor()
{
	CONSOLE_CURSOR_INFO cursor;    
	cursor.bVisible = FALSE;    
	cursor.dwSize = sizeof(cursor);    
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);    
	SetConsoleCursorInfo(handle, &cursor);
    return ;
}
