#include <stdio.h>
#include <stdlib.h>

int main() {
    int w = rand() % 100 + 1;
    int x = rand() % 100 + 1;
    int y = rand() % 100 + 1;
    int z = rand() % 100 + 1;
    int temp;

    printf("Initial: W: %d, X: %d, Y: %d, Z: %d\n", w, x, y, z);

    if (w > x) { temp = w; w = x; x = temp; }
    if (x > y) { temp = x; x = y; y = temp; }
    if (y > z) { temp = y; y = z; z = temp; }
    if (w > x) { temp = w; w = x; x = temp; }
    if (x > y) { temp = x; x = y; y = temp; }

    printf("Sorted: W: %d, X: %d, Y: %d, Z: %d", w, x, y, z);

    return 0;
}
