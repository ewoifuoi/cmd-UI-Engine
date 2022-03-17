#pragma once

#ifndef UI_ENGINE
#define UI_ENGINE



#include<Windows.h>
#include<conio.h>


#define USING_ENGINE(TEXT) HANDLE handle = CreateThread(NULL, 0, ThreadFun, NULL,0,  NULL);\
while(1){TEXT}\
WaitForSingleObject(handle, INFINITE);  

using namespace std;



void print(string s);
void kb_get();
DWORD WINAPI ThreadFun(LPVOID pM);

#endif