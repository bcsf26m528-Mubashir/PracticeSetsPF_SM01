//6 - Toggling a pth bit of x-value
//(DevC++ don't support this version of program . Run it online)


#include <stdio.h>



int main() {
    unsigned char flag,value,actualValue,recFlag,recValue;
    printf("Enter value:\n");
    scanf("%hhu",&value);
    printf("Enter Flag:\n");
    scanf("%hhu",&flag);
    actualValue=(flag << 7) + value;
     printf("%hhu",actualValue);
    recValue=((actualValue<<1)>>1);
    recFlag=actualValue>>7;

    printf("\nFlag Recovered:%hhu\nValue Recovered:%hhu",recFlag,recValue);
   
    return 0;
}

