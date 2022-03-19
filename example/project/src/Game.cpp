#include<ui_engine.h>

using namespace std;

void Game() {

    INIT_NORMAL
    make_boundary(59,22,LINE);
    auto btn_back = new Button("返回", 50, 20, BACK);
    temp.push_back(btn_back);btn_back->show();
    auto text = new Label("Game", 25, 10);text->show();
    LOOP(
        LISTEN_BUTTON()
        text->randColorShow(100);
        
    )
    
    return;
}