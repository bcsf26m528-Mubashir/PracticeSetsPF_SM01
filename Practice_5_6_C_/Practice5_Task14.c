#include <stdio.h>
#include <stdlib.h>

int main() {
    int x = rand() % 100 + 1;
    int y = rand() % 100 + 1;
    int z = rand() % 100 + 1;
    int temp;

    printf("Initial: X: %d, Y: %d, Z: %d\n", x, y, z);

    if (x < y) { temp = x; x = y; y = temp; }
    if (y < z) { temp = y; y = z; z = temp; }
    if (x < y) { temp = x; x = y; y = temp; }

    printf("Sorted: X: %d, Y: %d, Z: %d", x, y, z);

    return 0;
}
