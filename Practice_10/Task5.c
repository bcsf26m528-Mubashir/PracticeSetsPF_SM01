#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	srand(time(0));
	int num=rand(),droppedDigit;

	printf("Original:%d\n",num);
	printf("Reversed:");
	while(num>0){
		droppedDigit=num%10;
		printf("%d ",droppedDigit);
		num/=10;
	}
	
	
	
	
	return 0;
}
