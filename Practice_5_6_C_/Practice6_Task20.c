#include <stdio.h>

int main() {
    unsigned int n;

    scanf("%u", &n);

    if ((n & 1) && (n & 4) && (n & 16) && (n & 64))
        printf("Pattern matched");
    else
        printf("Pattern not matched");

    return 0;
}
