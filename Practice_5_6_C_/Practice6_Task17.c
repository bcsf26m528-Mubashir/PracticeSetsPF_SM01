#include <stdio.h>

int main() {
    unsigned int a, b, result;
    scanf("%u %u", &a, &b);

    result = a & b;
    printf("AND: %u\n", result);

    if (result & 1)
        printf("First bit is ON\n");
    if (result & 2)
        printf("Second bit is ON\n");
    if (result & 4)
        printf("Third bit is ON\n");
    if (result & 8)
        printf("Fourth bit is ON\n");

    return 0;
}
