#include <stdio.h>
#include <stdlib.h>

int main() {
    int x = rand() % 5 + 1;
    int y = rand() % 5 + 1;
    int z = rand() % 5 + 1;

    printf("X: %d, Y: %d, Z: %d\n", x, y, z);

    if (x == y && y == z)
        printf("All values are equal");
    else if (x != y && y != z && x != z)
        printf("All values are distinct");
    else
        printf("Two values are equal");

    return 0;
}
