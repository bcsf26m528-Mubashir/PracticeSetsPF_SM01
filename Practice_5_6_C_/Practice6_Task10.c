#include <stdio.h>

int main() {
    unsigned int n;
    scanf("%u", &n);

    printf("Selected bits value: %u", n & 12);

    return 0;
}
