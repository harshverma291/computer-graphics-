#include<stdio.h>
#include<math.h>
#include<graphics.h>
#include<conio.h>
int main()
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm,(char*)"D:\\Turboc3\\BGI");
    int x[3],y[3];
    float angle,rad;
int i;
    printf("Enter the coordinates of the triangle:\n");
    for(i=0;i<3;i++)
    {
    printf("Point %d: ",i+1);
        scanf("%d%d",&x[i],&y[i]);
    }
    setcolor(RED);
    line(x[0],y[0],x[1],y[1]);
    line(x[1],y[1],x[2],y[2]);
    line(x[2],y[2],x[0],y[0]);
    int cx=(x[0]+x[1]+x[2])/3;
    int cy=(y[0]+y[1]+y[2])/3;
    printf("Enter the angle of rotation:\n");
    scanf("%f",&angle);
    rad=angle*3.14/180;
    int xr[3],yr[3];
    for(i=0;i<3;i++)
    {
        xr[i]=cx+(x[i]-cx)*cos(rad)-(y[i]-cy)*sin(rad);
        yr[i]=cy+(x[i]-cx)*sin(rad)+(y[i]-cy)*cos(rad);
    }
    setcolor(WHITE);
    line(xr[0],yr[0],xr[1],yr[1]);
    line(xr[1],yr[1],xr[2],yr[2]);
    line(xr[2],yr[2],xr[0],yr[0]);
    setcolor(GREEN);
    circle(cx,cy,3);
    getch();
    return 0;

}
