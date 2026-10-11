#include <stdio.h>

int main() {
    unsigned int day, month, year, packed;
    unsigned int recDay, recMonth, recYear;

    printf("Day: ");
    scanf("%u", &day);

    printf("Month: ");
    scanf("%u", &month);

    printf("Year: ");
    scanf("%u", &year);

    if (day >= 1 && day <= 31 &&
        month >= 1 && month <= 12 &&
        year >= 2000 && year <= 2099) {

        packed = ((year - 2000) << 9) |
                 (month << 5) | day;

        printf("Packed value: %u\n", packed);

        recDay = packed & 31;
        recMonth = (packed >> 5) & 15;
        recYear = ((packed >> 9) & 127) + 2000;

        printf("Unpacked Date: %u/%u/%u\n",
               recDay, recMonth, recYear);
    }
    else {
        printf("Invalid Date\n");
    }

    return 0;
}
