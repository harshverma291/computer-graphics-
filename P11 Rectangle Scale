#include<stdio.h>
#include<math.h>
#include<graphics.h>
#include<conio.h>
int main()
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm,(char*)"D:\\Turboc3\\BGI");
    int x1,y1,x2,y2;
    int sx,sy,fx,fy;
    printf("Enter bottom left coordinates of rectangle:\n");
    scanf("%d%d",&x1,&y1);
    printf("Enter top left coordinates of rectangle:\n");
    scanf("%d%d",&x2,&y2);

    setcolor(WHITE);
    rectangle(x1,y1,x2,y2);
    printf("Enter scaling factors:\n");
    scanf("%d%d",&sx,&sy);
    printf("Enter fixed point coordinates:\n");
    scanf("%d%d",&fx,&fy);
    int xr1,yr1,xr2,yr2;
    xr1=fx+(x1-fx)*sx;
    yr1=fy+(y1-fy)*sy;  
    xr2=fx+(x2-fx)*sx;
    yr2=fy+(y2-fy)*sy;

    setcolor(RED);
    rectangle(xr1,yr1,xr2,yr2);
    getch();
    return 0;
}
