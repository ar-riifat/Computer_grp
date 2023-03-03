#include <graphics.h>

int main(){

    int gd = DETECT, gm;
    initgraph (&gd, &gm, "");

    line (200, 400, 250, 200);
    line (250, 200, 300, 400);
    line (300, 400, 150, 250);
    line (150, 250, 350, 250);
    line (350, 250, 200, 400);

    getch();

    closegraph();
}
