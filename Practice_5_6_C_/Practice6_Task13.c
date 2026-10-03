#include <stdio.h>

int main() {
    unsigned int n, bits;
    scanf("%u", &n);

    bits = n & 7;

    if (bits == 0) printf("Last three bits: 000");
    else if (bits == 1) printf("Last three bits: 001");
    else if (bits == 2) printf("Last three bits: 010");
    else if (bits == 3) printf("Last three bits: 011");
    else if (bits == 4) printf("Last three bits: 100");
    else if (bits == 5) printf("Last three bits: 101");
    else if (bits == 6) printf("Last three bits: 110");
    else printf("Last three bits: 111");

    return 0;
}
