#include <stdio.h>

int main() {
    char ch;
    scanf(" %c", &ch);

    ch = ch & 223;
    printf("%c, %d", ch, ch);

    return 0;
}
