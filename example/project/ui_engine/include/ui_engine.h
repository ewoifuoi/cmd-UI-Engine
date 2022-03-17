#pragma once

#ifndef UI_ENGINE
#define UI_ENGINE



#include<Windows.h>
#include<conio.h>


#include<listen.h>




using namespace std;



void print(string s);
void kb_get();
DWORD WINAPI ThreadFun(LPVOID pM);

#endif