#include<stdio.h>
#include<math.h>
#include<graphics.h>
#include<conio.h>
int main()
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm,(char*)"D:\\Turboc3\\BGI");

    int x1,y1,x2,y2,x3,y3;
    printf("Enter the coordinates of the triangle:\n");
    scanf("%d%d%d%d%d%d",&x1,&y1,&x2,&y2,&x3,&y3);
    setcolor(WHITE);
    line(x1,y1,x2,y2);
    line(x2,y2,x3,y3);
    line(x3,y3,x1,y1);

    int midY=getmaxy()/2;
    int rx1=x1, ry1=2*midY - y1;
    int rx2=x2, ry2=2*midY - y2;
    int rx3=x3, ry3=2*midY - y3;
    setcolor(RED);
    line(rx1,ry1,rx2,ry2);
    line(rx2,ry2,rx3,ry3);
    line(rx3,ry3,rx1,ry1);
    getch();
    return 0;

}
