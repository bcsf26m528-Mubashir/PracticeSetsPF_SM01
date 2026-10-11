
#include <stdio.h>

int main() {
    char ch;

    for (ch = 'a'; ch <= 'z'; ch++) {
        if (ch == 'a' || ch == 'e' || ch == 'i' ||
            ch == 'o' || ch == 'u') {
            printf("%c,%d\n", ch, ch);
        }
    }

    return 0;
}

