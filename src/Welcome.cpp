#include<ui_engine.h>
#include<interFace.h>
using namespace std;

// 示例
// 第一个 界面 ( 欢迎界面 )
void Welcome() {

    INIT_NORMAL // 初始化 窗口  ( 不可省略 )
    SCENE_WITHOUT_BACK(// 初始化场景 
        auto title = new Label("标题", 27, 6);
        auto btn1 = new Button("按钮 1", 26, 10, [](){
            // 请在这里编写按钮触发事件 (Enter 触发)
        });
        auto btn2 = new Button("按钮 2", 26, 13, [](){
            // 请在这里编写按钮触发事件 (Enter 触发)
        });
        auto btn3 = new Button("退出", 27, 16, [](){
            exit(0);// 结束进程
        });
        // 当前 场景 主循环 LOOP
        LOOP(
            // 按钮 监听 (如有按钮组件 则不可省略)
            LISTEN_BUTTON(btn1, btn2, btn3)
            // 调用组件方法
            title->randColorShow(500);
        )
    )
    return;
}