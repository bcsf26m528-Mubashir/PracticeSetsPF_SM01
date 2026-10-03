#include <stdio.h>

int main() {
    int math, physics, programming;
    scanf("%d %d %d", &math, &physics, &programming);

    if (math < 50 || physics < 50 || programming < 50)
        printf("Needs Improvement");
    else if (math >= 80 && physics >= 80 && programming >= 80)
        printf("Excellent");
    else if (math >= 60 && physics >= 60 && programming >= 60)
        printf("Good");

    return 0;
}
