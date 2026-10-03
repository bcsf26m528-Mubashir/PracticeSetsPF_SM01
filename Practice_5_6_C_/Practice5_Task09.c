#include <stdio.h>
#include <stdlib.h>

int main() {
    int w = rand() % 1000;
    int x = rand() % 1000;
    int y = rand() % 1000;
    int z = rand() % 1000;

    printf("W: %d\nX: %d\nY: %d\nZ: %d\n", w, x, y, z);

    if (w > x && w > y && w > z)
        printf("W is Largest");
    else if (x > w && x > y && x > z)
        printf("X is Largest");
    else if (y > w && y > x && y > z)
        printf("Y is Largest");
    else if (z > w && z > x && z > y)
        printf("Z is Largest");

    return 0;
}
