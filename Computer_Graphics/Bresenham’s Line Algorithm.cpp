#include<bits/stdc++.h>
#include<graphics.h>

using namespace std;

int main()
{
    system("cls");

    //code for installing the graphics driver
    int graphicsdriver = DETECT, gm;
    initgraph(&graphicsdriver, &gm, (char*)" ");

    int x1, x2, y1, y2, p, dx, dy, x, y;
    cout<<"Enter starting points (x1, y1: )";
    cin>>x1>>y1;
    cout<<"Enter ending points (x2, y2: )";
    cin>>x2>>y2;
    if(x1>x2)
    {
        cout<<"x1 has to be less than x2\n";
        char option[10];
        cout<<"Press any key and enter to try again\n";
        cin>>option;
        main();
    }

    dx = x2-x1, dy = y2-y1;
    p = 2 * dy - dx;

    x = x1, y = y1;

    //Breshenham's Line Algorithm

    while(x<=x2)
    {
        if(p<0)
        {
            putpixel(x,y, CYAN);
            x++;
            p = p + 2*dy;
        }
        else
        {
            putpixel(x,y,RED);
            x++;
            y++;
            p = p + 2*(dy-dx);
        }
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
