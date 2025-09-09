#include <graphics.h>
#include <conio.h> 
#include <stdio.h>
#include <math.h>
int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char*)"D:\\Turboc3\\BGI");
    int x, y,x1,y1, x2, y2,P;
    int dx = x2-x1;
    int dy = y2-y1;
    x = x1;
    y = y1;
    printf("Enter the first coordinates of the line to be displayed: ");
    scanf("%d %d", &x1, &y1);
    printf("Enter the second coordinates of the line to be displayed: ");
    scanf("%d %d", &x2, &y2);
     x = x1;
     y = y1;
     P = 2*dy - dx;
     while (x < x2) {
         if (P >= 0) {
             putpixel(x, y, WHITE);
             y = y + 1;
             P = P + 2*dy - 2*dx;
         } else {
             putpixel(x, y, RED);
             P = P + 2*dy;
         }
         x = x + 1;
         delay(100);
     }
    getch();

    return 0;
}
