//3- Turning OFF the pth bit of x value
//(DevC++ don't support this version of program . Run it online)


#include <stdio.h>



int main() {
    unsigned char num, position, newValue;

    printf("Write number: ");
    scanf("%hhu", &num);

    printf("Enter position: ");
    scanf("%hhu", &position);
    printf("%hhu %hhu",num,position);
    newValue = num & (~(1 << (position-1)));

    printf("New Value: %hhu\n", newValue);

    return 0;
}

