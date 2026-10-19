#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	srand(time(0));
	int num=450,droppedDigit,place=1,rev=0,temp;
	printf("Original:%d\n",num);

	temp=num;
	while(temp>=10){
     place*=10;
     temp/=10;
	}
	while(num>0){
		droppedDigit=num%10;
		rev=rev+(droppedDigit*place);
		place/=10;
		num/=10;
	}
	
		printf("Reversed: %d",rev);
	
	
	return 0;
}
