

#include "TXLib.h"

void draw_fon()
{
    txSetColor (TX_BLUE);
    txSetFillColor (TX_BLUE );
    txRectangle (0, 00, 800, 600);
}

void erikir(int x, int y)
{
    txSetColor ( TX_DARKGRAY);
    txSetFillColor ( TX_DARKGRAY );
    txCircle(x,y,50) ;
}
void draw_spaceship()
{
    txSetColor (  TX_BLACK,3);
    txSetFillColor ( TX_white);
    txRectangle (360, 480, 430, 540);

    txSetColor (  TX_BLACK);
    txSetFillColor ( TX_BLACK);
    POINT trapecia[4] = {{360, 540}, {380, 565}, {410, 565}, {430, 540}};
    txPolygon (trapecia, 4);

    txSetColor (  TX_BLACK,3);
    txSetFillColor ( TX_RED);

    POINT triangle[3] = {{430, 480}, {530, 515}, {430, 515},};
    txPolygon (triangle, 3);

    POINT triangl[3] = {{360, 480}, {260, 515}, {360, 515},};
    txPolygon (triangl, 3);

    txSetColor (  TX_BLACK,3);
    txSetFillColor ( TX_GRAY );

    POINT trapeci[4] = {{430, 515}, {460, 515}, {480, 565}, {430, 540}};
    txPolygon (trapeci, 4);

    POINT trapec[4] = {{360, 515}, {330, 515}, {310, 565}, {360, 540}};
    txPolygon (trapec, 4);

    txSetColor (  TX_BLACK,3);
    txSetFillColor ( TX_LIGHTCYAN  );

    POINT triang[3] = {{360, 480}, {395,425 }, {430, 480},};
    txPolygon (triang, 3);
}

int main()
{
    txCreateWindow (800, 600);

    int erikirx =-100;
    int erikiry =100;

    draw_fon ();

    while(erikirx<400)
    {
    draw_fon ();
    draw_spaceship();
    erikir(erikirx,erikiry);
    erikirx=erikirx+10;
    txSleep(35);
    }

    while(erikiry<800)
    {
    draw_fon ();
    draw_spaceship();
    erikir(erikirx,erikiry);
    erikirx=erikirx+10;
    erikiry=erikiry+10;
    txSleep(35);
    }

    txTextCursor (false);
    return 0;
}
