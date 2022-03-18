#include<ui_engine.h>

using namespace std;

void Welcome() {
    INIT_NORMAL
    make_boundary(59,22,LINE);
    // powerprint("贪吃蛇 qwq", 25, 3, white, -1);
    auto title = new Label("贪吃蛇 qwq", 25, 6);
    title->show();
    LOOP(200,

        title->randColorShow();
    )
    return;
}