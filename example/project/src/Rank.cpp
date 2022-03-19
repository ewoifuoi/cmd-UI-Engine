#include<ui_engine.h>

using namespace std;

void Rank() {

    INIT_NORMAL
    SCENE(
        auto title = new Label("排行榜", 27, 3);
        LOOP(
            LISTEN_BUTTON()
        )
    )
    return;
}