#include<ui_engine.h>

using namespace std;

void Game() {
    INIT_NORMAL
    SCENE(
        auto btn1 = new Button("确定", 24, 13, yellow, blue * 16 + white_b, [](){
            
        });
        auto btn2 = new Button("取消", 30, 13, yellow, blue * 16 + white_b);
        auto input = new Input("输入用户名开始游戏 : ", 7, 9, yellow_l, aqua_l);
        if(input->if_error()) {
            Error("错误 : 用户名不能为空 !");
            continue;
        }
        LOOP(
            LISTEN_BUTTON(btn1, btn2)
        )
    )
    return;
}