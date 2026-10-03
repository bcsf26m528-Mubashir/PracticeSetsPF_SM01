#include <stdio.h>

int main() {
    char ch;
    scanf(" %c", &ch);

    printf("ASCII: %d\n", ch);

    if (ch & 32)
        printf("Bit 32 is ON");

    printf("\nUppercase ASCII: %d", ch - 32);

    return 0;
}
