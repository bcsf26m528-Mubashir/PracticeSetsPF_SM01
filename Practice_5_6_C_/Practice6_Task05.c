#include <stdio.h>

int main() {
    char ch;
    scanf(" %c", &ch);

    printf("Uppercase: %c, %d\n", ch, ch);
    printf("Lowercase ASCII: %d", ch + 32);

    return 0;
}
