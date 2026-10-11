//6 - Toggling a pth bit of x-value
//(DevC++ don't support this version of program . Run it online)


#include <stdio.h>



int main() {
    unsigned char x;
    printf("Enter value:\n");
    scanf("%hhu",&x);
    printf("x:%hhu\n",x);
    x=(x<<4)+(x>>4);
    printf("New x:%hhu\n",x);
    
    
   
    return 0;
}

