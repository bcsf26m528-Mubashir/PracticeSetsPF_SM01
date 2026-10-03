#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    if ((a > b && a < c) || (a < b && a > c))
        printf("A (%d) is the middle value", a);
    else if ((b > a && b < c) || (b < a && b > c))
        printf("B (%d) is the middle value", b);
    else
        printf("C (%d) is the middle value", c);

    return 0;
}
