#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
	srand(time(0));
	unsigned char packed;
	int a,b,c;
	a=2;
	b=5;
	c=3;
	printf("A=%d , B=%d , C=%d\n",a,b,c);
	packed=(a << 6) + (b << 3) + c;
	printf("Packed Byte:%hhu\n",packed);
	unsigned char recA=packed >> 6;
	unsigned char recB=(packed >> 5)&7;
	unsigned char recC=packed & 7;
	printf("Recovered A=%d,B=%d ,C=%d",recA,recB,recC);

}
