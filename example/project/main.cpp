
#include <ui_engine.h>
#include <interFace.h>

using namespace std;

extern int Key[21];

int main() {
    
    LOOP(100,
        print("笑嘻了");
        if(UP) Welcome(); 
    )
    
    return 0;
}