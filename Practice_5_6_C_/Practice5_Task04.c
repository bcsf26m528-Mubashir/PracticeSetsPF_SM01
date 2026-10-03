#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    if (n >= 10 && n <= 99 && n % 2 == 0)
        printf("Valid Even Two-Digit Number");
    else
        printf("Out of Range or Odd");

    return 0;
}
