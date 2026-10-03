#include <stdio.h>

int main() {
    char ch;
    scanf(" %c", &ch);

    if (ch >= 'A' && ch <= 'Z' &&
        (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U'))
        printf("Uppercase Vowel");
    else if (ch >= 'a' && ch <= 'z' &&
             (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'))
        printf("Lowercase Vowel");
    else if (ch >= '0' && ch <= '9')
        printf("Digit");
    else
        printf("Other Character");

    return 0;
}
