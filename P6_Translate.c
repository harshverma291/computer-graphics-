#include<graphics.h>
#include<conio.h>
#include<stdio.h>
#include<math.h>    
int main()
{


    int A[3][3], B[3][4], C[3][4];
    int i, j, k;

    // Input first matrix (3x3)
    // printf("Enter elements of first matrix (3x3):\n");
    // for (i = 0; i < 3; i++) {
    //     for (j = 0; j < 3; j++) {
    //         scanf("%d", &A[i][j]);
    //     }
    // }
printf("Enter Translate factor tx and ty:\n");
int tx,ty;
scanf("%d %d",&tx,&ty);
A[0][0] = 1; A[0][1] = 0; A[0][2] = tx;
A[1][0] = 0; A[1][1] = 1; A[1][2] = ty;
A[2][0] = 0; A[2][1] = 0; A[2][2] = 1;  
    // Input second matrix (3x4)
    // printf("Enter elements of second matrix (3x4):\n");
    // for (i = 0; i < 3; i++) {
    //     for (j = 0; j < 4; j++) {
    //         scanf("%d", &B[i][j]);
    //     }
    // }
    printf("Enter First point (x1 y1):\n");
    int x1,y1;
    scanf("%d %d",&x1,&y1); 
    printf("Enter Second point (x2 y2):\n");
    int x2,y2; 
    scanf("%d %d",&x2,&y2);
    B[0][0] = x1; B[0][1] = x2;
    B[1][0] = y1; B[1][1] = y2; 
    B[2][0] = 1;  B[2][1] = 1; 


    // Initialize result matrix (3x2) with 0
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 2; j++) {
            C[i][j] = 0;
        }
    }

    // Matrix multiplication (3x3 * 3x2 = 3x2)
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 2; j++) {
            for (k = 0; k < 3; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Print result matrix (3x2)
    printf("Resultant matrix (3x2):\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 2; j++) {
            printf("%d\t", C[i][j]);
        }
        printf("\n");
    }










    int dx,dy,length;
    int gd=DETECT,gm;
    initgraph(&gd,&gm,(char*)"D:\\Turboc3\\BGI");
    dx=x2-x1;
    dy=y2-y1;
    if(abs(dx)>=abs(dy))
        length=abs(dx);
    else
        length=abs(dy);

    float xinc=dx/(float)length;
    float yinc=dy/(float)length;
    int x=x1;
    int y=y1;
     i=1;
    while(i<=length)
    {
        putpixel(x,y,WHITE);
        x+=xinc;
        y+=yinc;
        i++;
        // delay(100);
    }



    dx=C[0][1]-C[0][0];
    dy=C[1][1]-C[1][0];
    if(abs(dx)>=abs(dy))
        length=abs(dx);
    else
        length=abs(dy);

     xinc=dx/(float)length;
    yinc=dy/(float)length;
     x=C[0][0];
     y=C[1][0];
    i=1;
    while(i<=length)
    {
        putpixel(x,y,RED);
        x+=xinc;
        y+=yinc;
        i++;
        // delay(100);
    }
    
    getch();
    return 0;
}
