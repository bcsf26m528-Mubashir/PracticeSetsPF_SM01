#include <stdio.h>

int main(){
	int first,last,n,TDW=1,temp;
	printf("Enter the number:\n");
	scanf("%d",&n);
    last=n%10;
    temp=n;
    while(temp>=10){
    	TDW*=10;
    	temp/=10;
	}
	first=n/TDW;
    printf("First Digit: %d\n",first);
    printf("Last Digit: %d\n",last);
	return 0;
}
