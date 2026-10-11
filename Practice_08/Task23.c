
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int a, b;
    int aTens, aOnes, bTens, bOnes;

    srand(time(NULL));

    a = rand() % 90 + 10;
    b = rand() % 90 + 10;

    printf("A: %d, B: %d\n", a, b);

    aTens = a / 10;
    aOnes = a % 10;

    bTens = b / 10;
    bOnes = b % 10;

    if ((aTens == bTens && aOnes == bOnes) ||
        (aTens == bOnes && aOnes == bTens)) {
        printf("Same digits, possibly reordered\n");
    }
    else {
        printf("Different digits\n");
    }

    return 0;
}

