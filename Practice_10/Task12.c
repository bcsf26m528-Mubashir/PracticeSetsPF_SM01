#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	srand(time(0));
	int num=12321,droppedDigit,place=1,rev=0,temp,copy;
	printf("Original:%d\n",num);
    copy=num;
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
	
		printf("Reversed:%d",rev);
		
	if(copy==rev){
		printf("\nIt is Palindrome");
	}
	else{
		printf("Not a palindrome");
	}
	
	return 0;
}
