#include<graphics.h>
#include<conio.h>
#include<stdio.h>
#include<math.h>    
int main()
{
    int x,y,x1,y1,x2,y2,dx,dy,length;
    int gd=DETECT,gm;
    initgraph(&gd,&gm,(char*)"D:\\Turboc3\\BGI");
    printf("Enter the value of x1 and y1:");    
    scanf("%d%d",&x1,&y1);
    printf("Enter the value of x2 and y2:");    
    scanf("%d%d",&x2,&y2);
    dx=x2-x1;
    dy=y2-y1;
    if(abs(dx)>=abs(dy))
        length=abs(dx);
    else
        length=abs(dy);

    float xinc=dx/(float)length;
    float yinc=dy/(float)length;
    x=x1;
    y=y1;
    int i=1;
    while(i<=length)
    {
        putpixel(x,y,WHITE);
        x+=xinc;
        y+=yinc;
        i++;
        delay(100);
    }
    
    getch();
    return 0;
}
