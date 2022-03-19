
#pragma once

#ifndef INPUT

#define INPUT
#include<ui_engine.h>
using namespace std;

class Input{
private:
    string text;
    string input;
    pair<int, int> loc;
    int color = white;
    int in_color = white;
    int start;
    int error = 0;
public:
    Input(string tex, int x, int y);
    Input(string tex, int x, int y, int color, int in_Color);
    void setColor(int x);
    int GET();
    string getInput();
    void show();
    int if_error();

};




#endif