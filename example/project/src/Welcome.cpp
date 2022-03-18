#include<ui_engine.h>
#include<interFace.h>

using namespace std;

void Welcome() {

    INIT_NORMAL
    make_boundary(59,22,LINE);
    auto title = new Label("贪吃蛇 qwq", 25, 6);
    auto btn1 = new Button("开始游戏", 26, 12, [](){
        Game();
    });
    auto btn2 = new Button("排行榜", 27, 15);
    title->show();btn1->show();btn2->show();
    LOOP(
        LISTEN_BUTTON(btn1, btn2)
        title->randColorShow(500);
    )
    return;
}