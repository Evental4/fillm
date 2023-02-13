

#include "TXLib.h"

int main()
{
    txCreateWindow (800, 600);

    txSetColor (TX_BLUE);
    txSetFillColor (TX_BLUE );
    txRectangle (0, 00, 800, 600);

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

    txTextCursor (false);
    return 0;
}
