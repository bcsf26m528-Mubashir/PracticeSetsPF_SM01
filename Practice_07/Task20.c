#include <stdio.h>

int main() {
    char ch;
    int key;
    unsigned char cipher, decrypted;

    printf("Character: ");
    scanf(" %c", &ch);

    printf("Key: ");
    scanf("%d", &key);

    if (key >= 0 && key <= 255) {
        cipher = (unsigned char)ch ^ (unsigned char)key;
        decrypted = cipher ^ (unsigned char)key;

        if (cipher >= 32 && cipher <= 126)
            printf("Cipher: %u (%c)\n", cipher, cipher);
        else
            printf("Cipher: %u\n", cipher);

        printf("Decrypted: %c\n", decrypted);

        if (cipher < 32 || cipher > 126)
            printf("Cipher is not printable\n");
        else
            printf("Cipher is printable\n");
    }
    else {
        printf("Invalid Key\n");
    }

    return 0;
}
