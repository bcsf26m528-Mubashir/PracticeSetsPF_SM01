#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    if (n == 0)
        printf("Zero");
    else if (n > 0 && n % 2 == 0)
        printf("Positive Even");
    else if (n > 0 && n % 2 != 0)
        printf("Positive Odd");
    else if (n < 0 && n % 2 == 0)
        printf("Negative Even");
    else
        printf("Negative Odd");

    return 0;
}
