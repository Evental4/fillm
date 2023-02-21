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

void draw_spaceship2()
{

    txSetColor (  TX_BLACK,3);
    txSetFillColor (TX_LIGHTCYAN  );
    txEllipse (360, 100, 430, 150);

    txSetColor (  TX_BLACK,3);
    txSetFillColor ( TX_RED);
    txRectangle (360, 30, 430, 130);

    txSetColor (  TX_BLACK);
    txSetFillColor ( TX_GRAY);
    POINT trapecia[4] = {{360, 30}, {385, 5}, {405, 5}, {430, 30}};
    txPolygon (trapecia, 4);

    txSetColor (  TX_BLACK,3);
    txSetFillColor ( TX_CYAN);

    POINT triangle[3] = {{430, 30}, {600, 130}, {430, 70},};
    txPolygon (triangle, 3);

    POINT triangl[3] = {{360, 30}, {190, 130}, {360, 70},};
    txPolygon (triangl, 3);

    txSetColor (  TX_BLACK);
    txSetFillColor ( TX_BLACK );
    POINT trapeci[5] = {{385, 30}, {360, 90}, {395, 130}, {430, 90},{405 ,30 }};
    txPolygon (trapeci, 5);

    POINT triangle2[3] = {{430, 130}, {500, 95}, {430, 70},};
    txPolygon (triangle2, 3);

    POINT triangle3[3] = {{360, 130}, {290, 95}, {360, 70},};
    txPolygon (triangle3, 3);

}
int main()
{
    txCreateWindow (800, 600);

    int erikirx =-100;
    int erikiry =100;

    int x_spaceship =360;
    int y_spaceship =480;
    draw_fon ();

    while(erikirx<400)
    {
    draw_fon ();
    draw_spaceship(x_spaceship,y_spaceship);
    draw_spaceship2();
    erikir(erikirx,erikiry);
    erikirx=erikirx+10;
    txSleep(35);
    }

    while(erikiry<800)
    {
    draw_fon ();
    draw_spaceship(x_spaceship,y_spaceship);
    draw_spaceship2();
    erikir(erikirx,erikiry);
    erikirx=erikirx+10;
    erikiry=erikiry+10;
    txSleep(35);
    }

    while(x_spaceship<600)
    {
    draw_fon ();
    draw_spaceship2();
    draw_spaceship(x_spaceship,y_spaceship);
    x_spaceship=x_spaceship+10;
    txSleep(35);
    }

    while(x_spaceship>100)
    {
    draw_fon ();
    draw_spaceship2();
    draw_spaceship(x_spaceship,y_spaceship);
    x_spaceship=x_spaceship-10;
    txSleep(35);
    }

    txTextCursor (false);
    return 0;
}
