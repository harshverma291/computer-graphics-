#include<stdio.h>
#include<math.h>
#include<graphics.h>
#include<conio.h>
int main()
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm,(char*)"D:\\Turboc3\\BGI");
    int xc,yc,x,y,r,tx,ty;
    printf("Enter the center coordinates of circle \n");
    scanf("%d%d",&xc,&yc);
    printf("Enter the radius of circle \n");
    scanf("%d",&r);
    printf("Enter the translation factor \n");
    scanf("%d%d",&tx,&ty);
    x=0;
    y=r;
    int p=3-2*r;
    while(x<=y)
    {
        putpixel(xc+x,yc+y,WHITE);
        putpixel(xc-x,yc+y,WHITE);
        putpixel(xc+x,yc-y,WHITE);
        putpixel(xc-x,yc-y,WHITE);
        putpixel(xc+y,yc+x,WHITE);
        putpixel(xc-y,yc+x,WHITE);
        putpixel(xc+y,yc-x,WHITE);
        putpixel(xc-y,yc-x,WHITE);
        if(p<0)
            p=p+4*x+6;
        else
        {
            p=p+4*(x-y)+10;
            y--;
        }
        x++;
        delay(100);
    }


    x=0;
    y=r;
   p=3-2*r;
    while(x<=y)
    {
        putpixel(xc+x+tx,yc+y+ty,WHITE);
        putpixel(xc-x+tx,yc+y+ty,WHITE);
        putpixel(xc+x+tx,yc-y+ty,WHITE);
        putpixel(xc-x+tx,yc-y+ty,WHITE);
        putpixel(xc+y+tx,yc+x+ty,WHITE);
        putpixel(xc-y+tx,yc+x+ty,WHITE);
        putpixel(xc+y+tx,yc-x+ty,WHITE);
        putpixel(xc-y+tx,yc-x+ty,WHITE);
        if(p<0)
            p=p+4*x+6;
        else
        {
            p=p+4*(x-y)+10;
            y--;
        }
        x++;
        delay(100);
    }
    getch();
    return 0;
}
