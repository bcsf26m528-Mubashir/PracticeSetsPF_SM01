#include <stdio.h>
#include <stdlib.h>

int main() {
    int n = rand() % 900 + 100;
    int h = n / 100;
    int t = (n / 10) % 10;
    int u = n % 10;

    printf("N: %d -> ", n);

    if (h < t && t < u)
        printf("Digits in Ascending Order");
    else
        printf("Not in Ascending Order");

    return 0;
}
