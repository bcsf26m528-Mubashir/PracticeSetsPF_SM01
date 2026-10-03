#include <stdio.h>

int main() {
    unsigned int n, selected = 0;
    scanf("%u", &n);

    if (n & 16) selected += 16;
    if (n & 32) selected += 32;
    if (n & 64) selected += 64;
    if (n & 128) selected += 128;

    printf("Selected value: %u", selected);

    return 0;
}
