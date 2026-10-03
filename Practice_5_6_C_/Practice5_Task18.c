#include <stdio.h>

int main() {
    int w, x, y, z, count = 0;
    scanf("%d %d %d %d", &w, &x, &y, &z);

    if (w < 20 || w > 80) count++;
    if (x < 20 || x > 80) count++;
    if (y < 20 || y > 80) count++;
    if (z < 20 || z > 80) count++;

    printf("%d variables are outside the range [20, 80]", count);

    return 0;
}
