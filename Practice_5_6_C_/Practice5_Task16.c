#include <stdio.h>
#include <stdlib.h>

int main() {
    int d1 = rand() % 6 + 1;
    int d2 = rand() % 6 + 1;

    if (d1 == 6 && d2 == 6)
        printf("Die 1: %d, Die 2: %d -> Double Six Jackpot!", d1, d2);
    else if (d1 == d2)
        printf("Die 1: %d, Die 2: %d -> Pair / Double", d1, d2);
    else if (d1 + d2 == 7 || d1 + d2 == 11)
        printf("Die 1: %d, Die 2: %d -> Craps Natural Win", d1, d2);
    else
        printf("Die 1: %d, Die 2: %d -> Standard Roll", d1, d2);

    return 0;
}
