#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
	srand(time(0));
	unsigned char n=129,revA,revB,revC,revD,REV;
    revA=(n<<4)|(n>>4); //nibbles reversed
    revB=((revA&204)>>2)  | ((revA&51)<<2);
    revC=((revB&170)>>1)  | ((revB&85)<<1);
    REV=revC;
printf("Number:%hhu\n",n);
	printf("Reversed:%hhu\n",REV);
	if(n==REV){
		printf("Bit pattern is palindrome");
	}
	return 0;
	
     
     

}
