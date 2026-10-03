#include <stdio.h>

int main() {
    int total, hours, minutes, seconds;
    scanf("%d", &total);

    hours = total / 3600;
    minutes = (total % 3600) / 60;
    seconds = total % 60;

    printf("Hours: %d\n", hours);
    printf("Minutes: %d\n", minutes);
    printf("Seconds: %d\n", seconds);

    if (total < 60)
        printf("Less than one minute");
    else if (total >= 3600 && total <= 86400)
        printf("Within one day range");

    return 0;
}
