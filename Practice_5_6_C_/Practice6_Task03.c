#include <stdio.h>

int main() {
    unsigned int n;
    scanf("%u", &n);

    printf("Last three bits: %u", n & 7);

    return 0;
}
