#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    if (a > 0 && b > 0 && c > 0 && a + b > c && a + c > b && b + c > a) {
        if (a == b && b == c)
            printf("Valid Equilateral Triangle");
        else if (a == b || a == c || b == c)
            printf("Valid Isosceles Triangle");
        else
            printf("Valid Scalene Triangle");
    }
    else
        printf("Invalid Triangle");

    return 0;
}
