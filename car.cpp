#include<graphics.h>
int main()
{
    int gd = DETECT;
    int gm;
    initgraph(&gd,&gm,"c:\\tc\\bgi");
    //setcolor(GREEN);
    //bar(200,200,400,300);
    //bar(400,250,450,300);
    //bar(150,250,200,300);
    //arc(200,320,0,360,20);
    //arc(400,320,0,360,20);
    int maxX=getmaxx();
    //ROAD
    for(int i=0;i<maxX;i++)
    {


    setcolor(DARKGRAY);
    line(0,370,maxX,370);
    //SUN
    setcolor(YELLOW);
    circle(80+i,80,50);
    //VCR GAMES BOARD
    setcolor(WHITE);
    rectangle(525,250,535,370);
    rectangle(480,200,580,250);
    outtextxy(490,220,"  MURAD  ");
    //BUS
    setcolor(RED);
    rectangle(100+i,300,200+i,350);
    setcolor(GREEN);
    circle(120+i,360,10);
    circle(180+i,360,10);
    delay(15);
    cleardevice();


    }
    getch();
    closegraph();
}
