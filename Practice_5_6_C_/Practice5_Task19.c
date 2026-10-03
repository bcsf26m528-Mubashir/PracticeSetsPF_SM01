#include <stdio.h>

int main() {
    float x, y;
    scanf("%f %f", &x, &y);

    if (x == 0 && y == 0)
        printf("Origin");
    else if (x == 0 || y == 0)
        printf("Axis");
    else if (x > 0 && y > 0)
        printf("Quadrant 1");
    else if (x < 0 && y > 0)
        printf("Quadrant 2");
    else if (x < 0 && y < 0)
        printf("Quadrant 3");
    else
        printf("Quadrant 4");

    return 0;
}
