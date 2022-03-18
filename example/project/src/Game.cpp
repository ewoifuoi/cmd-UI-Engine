#include<ui_engine.h>

using namespace std;

void Game() {

    INIT_NORMAL
    make_boundary(59,22,LINE);
    auto btn_back = new Button("返回", 50, 20, [](){
        exit(0);
    });
    btn_back->show();temp.push_back(btn_back);
    auto text = new Button("text", 50, 5, [](){
        Back();
        
        return ;
    });
    auto text2 = new Button("text2", 50, 8, [](){
        exit(0);
    });
    text->show();text2->show();

    LOOP(
        LISTEN_BUTTON(text, text2)
        powerprint("Game", 25, 5, aqua, -1);
        
    )
    
    return;
}