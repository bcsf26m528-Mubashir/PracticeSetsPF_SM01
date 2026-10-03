#include <stdio.h>
#include <stdlib.h>

int main() {
    int w = rand() % 100 + 1;
    int x = rand() % 100 + 1;
    int y = rand() % 100 + 1;
    int z = rand() % 100 + 1;
    int largest, smallest;

    printf("W: %d, X: %d, Y: %d, Z: %d\n", w, x, y, z);

    largest = w;
    if (x > largest) largest = x;
    if (y > largest) largest = y;
    if (z > largest) largest = z;

    smallest = w;
    if (x < smallest) smallest = x;
    if (y < smallest) smallest = y;
    if (z < smallest) smallest = z;

    printf("Largest: %d, Smallest: %d, Difference: %d\n",
           largest, smallest, largest - smallest);

    if ((largest + smallest) / 2.0 > 50.0)
        printf("Midpoint is greater than 50");
    else
        printf("Midpoint is not greater than 50");

    return 0;
}
