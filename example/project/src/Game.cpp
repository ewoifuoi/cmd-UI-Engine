#include<ui_engine.h>

using namespace std;

void Game() {
    INIT_NORMAL
    SCENE_WITHOUT_BACK(
        auto btn1 = new Button("剧情模式", 25, 9, purple_l, blue * 16 + yellow_l, [](){
            Error("当前功能未开放 !");
        });
        auto btn2 = new Button("街机模式", 25, 13, purple_l, blue * 16 + yellow_l);
        LOOP(
            LISTEN_BUTTON(btn1, btn2)
        )
    )
}