
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int a, b;

    srand(time(NULL));

    a = rand() % 10 + 1;
    b = rand() % 10 + 1;

    printf("A: %d, B: %d\n", a, b);

    if (a == b) {
        printf("Equal\n");
    }
    else if (a > b) {
        printf("A is greater\n");
    }
    else {
        printf("B is greater\n");
    }

    return 0;
}

