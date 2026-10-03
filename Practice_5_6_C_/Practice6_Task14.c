#include <stdio.h>

int main() {
    unsigned int n, bits;
    scanf("%u", &n);

    bits = n & 15;

    if (bits > 7)
        printf("Last four bits have bit 4 ON");
    else
        printf("Last four bits have bit 4 OFF");

    return 0;
}
