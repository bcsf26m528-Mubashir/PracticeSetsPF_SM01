#include <stdio.h>

int main() {
    char ch;
    scanf(" %c", &ch);

    printf("Lowercase: %c, %d\n", ch, ch);
    printf("Uppercase ASCII: %d", ch - 32);

    return 0;
}
