#include<ui_engine.h>

using namespace std;

void Error(string text) {

    vector<Button*> temp;
	int pointer = 0;
    temp.clear();
	pointer = 0;
    make_boundary(13,5, 50, 18,  LINE);
    for(int i = 14; i <= 49; i++) {
        for(int j = 6; j <= 17; j++) {
            powerprint(" ", i, j, white, -1);
        }
    }
    auto txt = new Label(text, 20, 10, red_l);
    auto btn = new Button("确定", 30, 14, [](){
        Back();
    });
    LOOP(
        LISTEN_BUTTON(btn)
    )
    delete txt;delete btn;
    if(back) back = 0;
    return ;
}