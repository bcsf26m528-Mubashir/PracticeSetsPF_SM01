#include <stdio.h>
#include <stdlib.h>

int main() {
    int x = rand() % 1000;
    int y = rand() % 1000;
    int z = rand() % 1000;

    printf("X: %d\nY: %d\nZ: %d\n", x, y, z);

    if (x < y && x < z)
        printf("Smallest: %d", x);
    else if (y < x && y < z)
        printf("Smallest: %d", y);
    else if (z < x && z < y)
        printf("Smallest: %d", z);
    else
        printf("No unique smallest value");

    return 0;
}
