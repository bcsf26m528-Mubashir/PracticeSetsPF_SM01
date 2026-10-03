#include <stdio.h>

int main() {
    unsigned int n;
    scanf("%u", &n);

    if (n & 64)
        printf("Bit 7 is ON");
    else
        printf("Bit 7 is OFF");

    return 0;
}
