#include <stdio.h>

int main() {
    unsigned int n;
    scanf("%u", &n);

    if ((n & 4) && (n & 32))
        printf("Both selected bits are ON");
    else
        printf("Both selected bits are not ON");

    return 0;
}
