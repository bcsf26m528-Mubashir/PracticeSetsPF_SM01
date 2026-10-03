#include <stdio.h>

int main() {
    int amount;
    scanf("%d", &amount);

    if (amount > 0 && amount % 100 == 0) {
        printf("1000 Notes: %d\n", amount / 1000);
        amount %= 1000;

        printf("500 Notes: %d\n", amount / 500);
        amount %= 500;

        printf("100 Notes: %d", amount / 100);
    }
    else {
        printf("Invalid Amount: Must be a positive multiple of 100");
    }

    return 0;
}
