#include<bits/stdc++.h>
#include<graphics.h>

using namespace std;

void drawCircle(int x, int y, int xc, int yc)
{
    putpixel(xc+x, yc+y, RED);
    putpixel(xc+x, yc-y, CYAN);
    putpixel(xc-x, yc+y, RED);
    putpixel(xc-x, yc-y, CYAN);
    putpixel(xc+y, yc+x, RED);
    putpixel(xc+y, yc-x, CYAN);
    putpixel(xc-y, yc+x, RED);
    putpixel(xc-y, yc-x, CYAN);
}


int main()
{
    system("cls");
    //code for installing the graphics driver
    int graphicsdriver = DETECT, gm;
    initgraph(&graphicsdriver, &gm, (char*) "");

    int xc, yc, x, y, r, d;

    cout<< "Enter Central Co-Ordinate (xc,yc) & Radius (r): ";
    cin>>xc>>yc>>r;

    x = 0, y = r, d = 3-2*r;

    //Bresenham's Circle Algorithm

    while(x<=y)
    {
        drawCircle(x, y, xc, yc);
        if(d<0)
        {
            x++;
            d = d + 4*x+6;
        }
        else
        {
            x++;
            y--;
            d = d+4*(x-y)+10;
        }
        delay(50);
    }

    getch();

    closegraph();

    cout<<"Do you want to run again? (1 for Yes, 2 for No)"<<endl;
    int choice;
    cin>>choice;
    if(choice == 1)
    {
        main();
    }
    else if(choice == 2)
    {
        return 0;
    }

}
