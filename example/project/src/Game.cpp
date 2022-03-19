#include<ui_engine.h>

using namespace std;

void Game() {
    INIT_NORMAL
    SCENE(
        
        LOOP(
            LISTEN_BUTTON()
        )
    )
    return;
}