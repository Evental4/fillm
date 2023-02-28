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
void draw_bomb(int x,int  y)
    {
    //x=700
    //y=260
    txSetColor (  TX_BLACK,3);
    txSetFillColor (  TX_RED );
    txRectangle (x,y ,x+20 ,y-40 );
    txSetColor (  TX_BLACK,3);
    txSetFillColor (  TX_white );
    POINT triangle4[3] = {{x,y}, {x+10,y+40}, {x+20,y },};
    txPolygon (triangle4, 3);
    txSetFillColor (  TX_BLACK );
    POINT trapeciae[5] = {{x, y-40}, {x-20,y-60}, {x+10,y-50}, {x+40,y-60 },{x+20 ,y-40 }};
    txPolygon (trapeciae, 5);
    }
 void Text(int x ,int y)
  {

  txSetColor (  TX_white);
  txSelectFont ("Arial", 40);
  txDrawText   (x, y, x+800, y+600," ¬џ∆»¬Ў»…,\n"
                                   "45  орабл€,\n\n"



                                      "јвтор,\n\n\n"
                                    "Eve_максим"
                                                );
  }
 void Text_diolog(int x ,int y ,const char* text, COLORREF color)
  {
    txSetColor (TX_BLACK,5);
    txSetFillColor (TX_GREEN);
    txRectangle (0, 450, 800, 600);
    txSetFillColor (color);
    txRectangle (15, 465, 145, 585);
    txSetColor (  TX_white);
    txSelectFont ("Arial", 40);
    txTextOut   (x, y,  text );
  }
int main()
{
    txCreateWindow (800, 600);

    int erikirx =-100;
    int erikiry =100;

    int x_spaceship =360;
    int y_spaceship =800;

    int x_spaceship2 =395;
    int y_spaceship2 =-80;

    int x_bomb=395 ;
    int y_bomb=80 ;

    int xText= 15;
    int yText= 700;

    int  xText_diolog=150;
    int  yText_diolog=470;

    while (yText >-100)
     {
      draw_fon ();
      txBegin();
      Text(xText ,yText );
      yText-=5;//в диологе убрать

      txEnd();
      txSleep(50);
      }
    while(erikirx<400)
    {
    draw_fon ();
    erikir(erikirx,erikiry);
    erikirx=erikirx+10;
    txSleep(35);
    }

    while(erikiry<800)
    {
    draw_fon ();
    erikir(erikirx,erikiry);
    erikirx=erikirx+10;
    erikiry=erikiry+10;
    txSleep(35);
    }
    while(y_spaceship>480)
    {
    draw_fon ();
    draw_spaceship(x_spaceship,y_spaceship);
    y_spaceship=y_spaceship-10 ;
    txSleep(25);
    }
    while(y_spaceship2<80)
    {
    draw_fon ();
    draw_spaceship(x_spaceship,y_spaceship);
    draw_spaceship2(x_spaceship2,y_spaceship2);
    y_spaceship2=y_spaceship2+10;
    txSleep(10);
    }
    Text_diolog( xText_diolog,yText_diolog ,"здраствуйте Dikrightк вам на тереторию прилетел дилигаци€ из 'SERTY'проезвоедит запрос на сопроваждаюших лиц. ", TX_BLUE);
    txSleep(1000);
    txEnd();
    Text_diolog( xText_diolog,yText_diolog ,"a...", TX_BLUE);
    txSleep(1000);
    txEnd();
    Text_diolog( xText_diolog,yText_diolog , "это точно корабыл Dikrightк", TX_BLUE);
    txSleep(1000);
    txEnd();
    Text_diolog( xText_diolog,yText_diolog ,"gfhfhfggdhdfhdhhfghdfjfj", TX_RED);
    txSleep(1000);
    Text_diolog( xText_diolog,yText_diolog ,"„то?", TX_BLUE);
    txSleep(1000);
    Text_diolog( xText_diolog,yText_diolog ,"hghfjjuduijdjgvhhrhfhgjf", TX_RED);
    txSleep(1000);
    Text_diolog( xText_diolog,yText_diolog ,"команд думаю это корабыль'MALIS'", TX_BLUE);
    txSleep(1000);
    Text_diolog( xText_diolog,yText_diolog ,"нам нужно как быстрей скрытс€.", TX_BLUE);
    txSleep(1000);
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
    while(x_spaceship2>180)
    {
    draw_fon ();
    draw_spaceship(x_spaceship,y_spaceship);
    draw_spaceship2(x_spaceship2,y_spaceship2);
    x_spaceship2=x_spaceship2-10;
    txSleep(35);
    }
    while(x_spaceship2<360,x_spaceship<360)
    {
    draw_fon ();
    draw_spaceship2(x_spaceship2,y_spaceship2);
    draw_spaceship(x_spaceship,y_spaceship);
    x_spaceship2=x_spaceship2+10;
    x_spaceship=x_spaceship+10;
    txSleep(35);
    }
    Text_diolog( xText_diolog,yText_diolog ,"что такое как мы не пытались они нас посто€но на гон€ют.", TX_BLUE);
    txSleep(1000);
    txEnd();
    Text_diolog( xText_diolog,yText_diolog ,"аghghfghfghf", TX_RED);
    txSleep(3000);
    txEnd();
    Text_diolog( xText_diolog,yText_diolog ,"....”ћћћћћћ–––––»»»““““≈≈≈≈.......", TX_RED);
    txSleep(90);
    txEnd();

    while(y_bomb<430)
    {
    draw_fon ();
    draw_spaceship2(x_spaceship2,y_spaceship2);
    draw_spaceship(x_spaceship,y_spaceship);
    draw_bomb(x_bomb,y_bomb) ;
    y_bomb=y_bomb+10;
    txSleep(5);
    }
    txSetColor (TX_BLACK);
    txSetFillColor (TX_BLACK );
    txRectangle (0, 00, 800, 600);
    txSetColor (  TX_white);
    txTextOut (350, 300, "To Be Continued...");


    txTextCursor (false);
    return 0;
}
