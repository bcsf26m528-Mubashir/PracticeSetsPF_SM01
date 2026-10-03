#include <stdio.h>

int main() {
    char ch;
    scanf(" %c", &ch);

    printf("ASCII: %d\n", ch);

    if (ch & 32)
        printf("Bit 32 is ON");
    else
        printf("Bit 32 is OFF");

    return 0;
}
