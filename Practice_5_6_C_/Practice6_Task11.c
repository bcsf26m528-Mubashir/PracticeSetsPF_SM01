#include <stdio.h>

int main() {
    unsigned int n;
    unsigned int first, second;

    scanf("%u", &n);

    first = n & 8;
    second = n & 16;

    if (first && second)
        printf("Both bits are ON");
    else if (!first && !second)
        printf("Both bits are OFF");
    else if (first)
        printf("First is On and Second is Off");
    else
        printf("First is Off and Second is On");

    return 0;
}
