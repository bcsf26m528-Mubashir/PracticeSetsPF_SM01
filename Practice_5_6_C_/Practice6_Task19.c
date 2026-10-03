#include <stdio.h>

int main() {
    char ch, upper;

    scanf(" %c", &ch);

    if (ch & 32)
        upper = ch & 223;
    else
        upper = ch;

    printf("Lowercase: %c, %d\n", ch, ch);
    printf("Uppercase: %c, %d", upper, upper);

    return 0;
}
