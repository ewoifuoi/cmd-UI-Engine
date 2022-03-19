#include<ui_engine.h>
#include<interFace.h>
using namespace std;



void Welcome() {

    INIT_NORMAL
    SCENE_WITHOUT_BACK(
        auto title = new Label("贪吃蛇 qwq", 25, 6);
        auto btn1 = new Button("开始游戏", 26, 12, [](){
            Load();
        });
        auto btn2 = new Button("排行榜", 27, 15, [](){
            Rank();
        });
        auto btn3 = new Button("退出游戏", 26, 18, [](){
            exit(0);
        });

        LOOP(
            LISTEN_BUTTON(btn1, btn2, btn3)
            title->randColorShow(500);
        )
    )
    return;
}