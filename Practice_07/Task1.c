//1- Upper to lowercase character using XOR

#include <stdio.h>

int main(){
	char alpha,conAlpha;
	printf("Write character:\n");
	scanf("%c",&alpha);
	conAlpha=alpha ^ 32;// 5th bit will be fliped 0->1  or 1->0
	printf("Converted Character:%c",conAlpha);
	return 0;
}
