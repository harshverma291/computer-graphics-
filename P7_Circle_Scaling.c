#include <stdio.h>
#include <math.h>

void printCircle(int radius) {
    int diameter = 2 * radius;
    for (int y = radius; y >= -radius; y--) {
        for (int x = -radius; x <= radius; x++) {
            // Equation of circle: x^2 + y^2 = r^2
            // We allow some tolerance for printing
            if (abs(x*x + y*y - radius*radius) < radius) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
}

int main() {
    int radius;
    float scale;

    printf("Enter radius of circle: ");
    scanf("%d", &radius);

    printf("Enter scale factor: ");
    scanf("%f", &scale);

    printf("\nOriginal Circle:\n");
    printCircle(radius);

    int scaledRadius = (int)(radius * scale);

    printf("\nScaled Circle:\n");
    printCircle(scaledRadius);

    return 0;
}
