#include<ui_engine.h>
#include<interFace.h>

using namespace std;

string user_name="";

void Load() {
    INIT_NORMAL
    SCENE_WITHOUT_BACK(
        
        auto btn1 = new Button("确定", 24, 13, yellow, blue * 16 + white_b, [](){
            Confirm();
        });
        auto btn2 = new Button("取消", 30, 13, yellow, blue * 16 + white_b, [](){
            Back();
        });
        auto input = new Input("输入用户名开始游戏 : ", 7, 9, yellow_l, aqua_l);
        user_name = input->getInput();
       
        // if(input->if_error() == 1) {
        //     Error("错误 : 用户名不能为空 !");
        //     continue;
        // }
        LOOP(
            LISTEN_BUTTON(btn1, btn2)
        )
    )
    return;
}

void Confirm() {
    INIT_NORMAL
    SCENE_WITHOUT_BACK(
        auto title1 = new Label("您将使用 ", 15, 9, yellow_l);
        auto name = new Label(user_name, 26, 9);
        auto title2 = new Label("进行游戏", 37, 9, yellow_l);
        auto btn1 = new Button("确定", 24, 13, [](){
            Game();
        });
        auto btn2 = new Button("取消", 30, 13, [](){
            Back();
        });
        LOOP(
            LISTEN_BUTTON(btn1, btn2)
            name->randColorShow(200);
        )
    )
    return ;
}