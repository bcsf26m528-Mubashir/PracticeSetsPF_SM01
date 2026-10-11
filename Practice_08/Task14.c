
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int a, b;
    int aTens, aOnes, bTens, bOnes;
    int sumA, sumB;

    srand(time(NULL));

    a = rand() % 90 + 10;
    b = rand() % 90 + 10;

    printf("A: %d, B: %d\n", a, b);

    aTens = a / 10;
    aOnes = a % 10;

    bTens = b / 10;
    bOnes = b % 10;

    sumA = aTens + aOnes;
    sumB = bTens + bOnes;

    if (sumA == sumB) {
        printf("Digit sums are equal\n");
    }
    else {
        printf("Digit sums differ\n");
    }

    if (aTens == bTens) {
        printf("Same tens digit\n");
    }

    return 0;
}

