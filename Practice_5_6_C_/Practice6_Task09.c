#include <stdio.h>

int main() {
    unsigned int n, bits;
    scanf("%u", &n);

    bits = n & 3;

    if (bits == 0)
        printf("Last two bits: 00");
    else if (bits == 1)
        printf("Last two bits: 01");
    else if (bits == 2)
        printf("Last two bits: 10");
    else
        printf("Last two bits: 11");

    return 0;
}
