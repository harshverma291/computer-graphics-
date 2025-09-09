#include<stdio.h>
#include<math.h>
#include<graphics.h>
#include<conio.h>
int main()
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm,(char*)"D:\\Turboc3\\BGI");
    int x1,y1,x2,y2,x3,y3,xr1,xr2,xr3,yr1,yr2,yr3;
    float angle,rad;
    printf("Enter the coordinates of the triangle:\n");
    scanf("%d%d%d%d%d%d",&x1,&y1,&x2,&y2,&x3,&y3);
    printf("Enter the angle of rotation:\n");
    scanf("%f",&angle);
    rad=angle*3.14/180;
    setcolor(WHITE);
    line(x1,y1,x2,y2);
    line(x2,y2,x3,y3);
    line(x3,y3,x1,y1);
    int cx=(x1+x2+x3)/3;
    int cy=(y1+y2+y3)/3;
    xr1=cx+(x1-cx)*cos(rad)-(y1-cy)*sin(rad);
    yr1=cy+(x1-cx)*sin(rad)+(y1-cy)*cos(rad);
    xr2=cx+(x2-cx)*cos(rad)-(y2-cy)*sin(rad);
    yr2=cy+(x2-cx)*sin(rad)+(y2-cy)*cos(rad);
    xr3=cx+(x3-cx)*cos(rad)-(y3-cy)*sin(rad);
    yr3=cy+(x3-cx)*sin(rad)+(y3-cy)*cos(rad);
    setcolor(RED);
    line(xr1,yr1,xr2,yr2);
    line(xr2,yr2,xr3,yr3);
    line(xr3,yr3,xr1,yr1);
    getch();
    
    return 0;
}
