//9-Two's complement


#include <stdio.h>



int main() {
    unsigned char x,twoC,twoC2;
    printf("Enter value:\n");
    scanf("%hhu",&x);
    printf("x:%hhu\n",x);
    twoC=~(x)+1;
    twoC2=256-x;
    printf("\n ~(x+1):%hhu\n",twoC);
    printf("\n 256-x:%hhu\n",twoC2);
    if(twoC==twoC2) printf("Both methods match");
    
   
    return 0;
}

