
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
public:
    Input(string tex, int x, int y);
    void setColor(int x);
    void GET();
    string getInput();
    void show();

};




#endif