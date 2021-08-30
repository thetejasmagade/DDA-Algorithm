#include <stdio.h>
#include<iostream>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
#include<dos.h>
#include<graphics.h>

using namespace std;

void dda(int x1, int y1, int x2, int y2);

int main(){
    int gd = DETECT, gm;
    int x1, y1, x2, y2;
    initgraph(&gd, &gm, "c:\\tcplus\\bgi");
    cleardevice();
    cout << "DDA Line generation algorithm";
    cout << "\n enter the starting coordinates for drawing line";
    cin >> x1 >> y1;
    cout << "\n enter the ending co-ordinates";
    cin >> y1 >> y2;
    dda(x1, y1, x2, y2);
    cout << "\n Thank you";
    getch();
    closegraph();
}

void dda(int x1, int y1, int x2, int y2){
    int i, dx, dy, steps;
    float x, y;
    float xinc, yinc;
    dx = (x2-x1);
    dy = (y2-y1);
    if(abs(dx)>=abs(dy))
        steps = dx;
    else
        steps = dy;
    xinc = (float) dx/steps;
    yinc = (float) dy/steps;
    x = x1;
    y = y1;
    putpixel(x, y, WHITE);
    for(i=1;i<steps;i++){
        x = x + xinc;
        y = y + yinc;
        x1 = x + 0.5;
        y1 = y + 0.5;
        putpixel(x1, y1, WHITE);
    }
}
