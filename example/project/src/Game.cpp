#include<ui_engine.h>

using namespace std;

void Game() {
    INIT_NORMAL
    SCENE(
        auto text = new Label("GAME", 28, 8);
        LOOP(
            LISTEN_BUTTON()
            text->randColorShow(100);
        )
    )
    return;
}