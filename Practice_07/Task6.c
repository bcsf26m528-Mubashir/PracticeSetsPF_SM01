//6 - Toggling a pth bit of x-value
//(DevC++ don't support this version of program . Run it online)


#include <stdio.h>



int main() {
    unsigned char num, position, newValue,newValue2;

    printf("Write number: ");
    scanf("%hhu", &num);

    printf("Enter position: ");
    scanf("%hhu", &position);
    printf("%hhu %hhu",num,position);
    newValue = num ^ (1<<(position-1));
    newValue2 = newValue ^ (1<<(position-1));
    printf("New Value After first toggle: %hhu\n", newValue);
      printf("New Value After second toggle: %hhu\n", newValue2);

    return 0;
}

