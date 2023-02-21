#include "TXLib.h"

void draw_fon()
{
    txSetColor (TX_BLUE);
    txSetFillColor (TX_BLUE );
    txRectangle (0, 00, 800, 600);
}

void erikir(int x, int y)
{
    txSetColor ( TX_MAGENTA );
    txSetFillColor (TX_MAGENTA  );
    txCircle(x,y,50) ;
}
void draw_spaceship(int x ,int y)
{
    // x= 360
    // y= 480
    txSetColor (  TX_BLACK,3);
    txSetFillColor ( TX_white);
    txRectangle (x, y, x+70, y+60);

    txSetColor (  TX_BLACK);
    txSetFillColor ( TX_BLACK);
    POINT trapecia[4] = {{x,  y+60}, {x+20, y+85}, {x+50, y+85}, {x+70,  y+60}};
    txPolygon (trapecia, 4);

    txSetColor (  TX_BLACK,3);
    txSetFillColor ( TX_RED);

    POINT triangle[3] = {{x+70,y}, {x+170, y+35}, {x+70, y+35},};
    txPolygon (triangle, 3);

    POINT triangl[3] = {{x, y}, {x-100, y+35}, {x, y+35},};
    txPolygon (triangl, 3);

    txSetColor (  TX_BLACK,3);
    txSetFillColor ( TX_GRAY );

    POINT trapeci[4] = {{x+70, y+35}, {x+100, y+35}, {x+120, y+85}, {x+70,  y+60}};
    txPolygon (trapeci, 4);

    POINT trapec[4] = {{x, y+35}, {x-30, y+35}, {x-50, y+85}, {x, y+60}};
    txPolygon (trapec, 4);

    txSetColor (  TX_BLACK,3);
    txSetFillColor ( TX_LIGHTCYAN  );

    POINT triang[3] = {{x,y}, {x+35,y-55 }, {x+70, y},};
    txPolygon (triang, 3);
}

void draw_spaceship2(int x,int y)
{

    txSetColor (  TX_BLACK,3);
    txSetFillColor (TX_LIGHTCYAN  );
    txEllipse (x-35, y+20, x+35, y+70);
    //x= 395
    //y= 80
    txSetColor (  TX_BLACK,3);
    txSetFillColor ( TX_RED);
    txRectangle (x-35, y-50, x+35, y+50);

    txSetColor (  TX_BLACK);
    txSetFillColor ( TX_GRAY);
    POINT trapecia[4] = {{x-35, y-50}, {x-10, y-75}, {x+10, y-75}, {x+35, y-50}};
    txPolygon (trapecia, 4);

    txSetColor (  TX_BLACK,3);
    txSetFillColor ( TX_CYAN);

    POINT triangle[3] = {{x+35, y-50}, {x+205, y+50}, {x+35, y-10},};
    txPolygon (triangle, 3);

    POINT triangl[3] = {{x-35, y-50}, {x-205, y+50}, {x-35, y-10},};
    txPolygon (triangl, 3);

    txSetColor (  TX_BLACK);
    txSetFillColor ( TX_BLACK );
    POINT trapeci[5] = {{x-10, y-50}, {x-35, y+10}, {x, y+50}, {x+35, 90},{x+10 ,y-50 }};
    txPolygon (trapeci, 5);

    POINT triangle2[3] = {{x+35, y+50}, {x+105, y+15}, {x+35, y-10},};
    txPolygon (triangle2, 3);

    POINT triangle3[3] = {{x-35, y+50}, {x-105, y+15}, {x-35, y-10},};
    txPolygon (triangle3, 3);

}
int main()
{
    txCreateWindow (800, 600);

    int erikirx =-100;
    int erikiry =100;

    int x_spaceship =360;
    int y_spaceship =480;

    int x_spaceship2 =395;
    int y_spaceship2 =80;
    draw_fon ();

    while(erikirx<400)
    {
    draw_fon ();
    draw_spaceship(x_spaceship,y_spaceship);
    draw_spaceship2(x_spaceship2,y_spaceship2);
    erikir(erikirx,erikiry);
    erikirx=erikirx+10;
    txSleep(35);
    }

    while(erikiry<800)
    {
    draw_fon ();
    draw_spaceship(x_spaceship,y_spaceship);
    draw_spaceship2(x_spaceship2,y_spaceship2);
    erikir(erikirx,erikiry);
    erikirx=erikirx+10;
    erikiry=erikiry+10;
    txSleep(35);
    }

    while(x_spaceship<600)
    {
    draw_fon ();
    draw_spaceship2(x_spaceship2,y_spaceship2);
    draw_spaceship(x_spaceship,y_spaceship);
    x_spaceship=x_spaceship+10;
    txSleep(25);
    }

    while(x_spaceship>100)
    {
    draw_fon ();
    draw_spaceship2(x_spaceship2,y_spaceship2);
    draw_spaceship(x_spaceship,y_spaceship);
    x_spaceship=x_spaceship-10;
    txSleep(25);
    }
    while(x_spaceship2>200)
    {
    draw_fon ();
    draw_spaceship(x_spaceship,y_spaceship);
    draw_spaceship2(x_spaceship2,y_spaceship2);
    x_spaceship2=x_spaceship2-10;
    txSleep(35);
    }
    txTextCursor (false);
    return 0;
}
