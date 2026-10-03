#include <stdio.h>

int main() {
    unsigned int n;
    scanf("%u", &n);

    printf("Last four bits: %u", n & 15);

    return 0;
}
