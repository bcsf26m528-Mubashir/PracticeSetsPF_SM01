
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int a, b;

    srand(time(NULL));

    a = rand() % 99 + 1;
    b = rand() % 99 + 1;

    printf("A: %d, B: %d\n", a, b);

    if (a % 2 == 0 && b % 2 == 0) {
        printf("Both even\n");
    }
    else if (a % 2 != 0 && b % 2 != 0) {
        printf("Both odd\n");
    }
    else {
        printf("One even, one odd\n");
    }

    if ((a + b) % 5 == 0) {
        printf("Sum is divisible by 5\n");
    }

    return 0;
}

