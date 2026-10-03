#include <stdio.h>

int main() {
    unsigned int n;
    scanf("%u", &n);

    if (n & 16)
        printf("Bit 5 is ON");
    else
        printf("Bit 5 is OFF");

    return 0;
}
