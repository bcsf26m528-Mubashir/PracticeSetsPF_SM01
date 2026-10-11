#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
	srand(time(0));
	unsigned char packed;
	int w,x,y,z;
	w=3;
	x=0;
	y=2;
	z=1;
	printf("W=%d , X=%d , Y=%d , Z=%d\n",w,x,y,z);
	packed=(w << 6) + (x << 4) + (y<<2) + z;
	printf("Packed Byte:%hhu\n",packed);
	unsigned char recW=packed >> 6;
	unsigned char recX=((packed <<2)>>6)&3;
	unsigned char recY=((packed << 4)>>6)&3;
	unsigned char recZ=packed & 3;
	printf("Recovered W=%d,X=%d ,Y=%d,Z=%d",recW,recX,recY,recZ);

}
