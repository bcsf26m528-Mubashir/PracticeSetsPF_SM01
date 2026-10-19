#include <stdio.h>

int main(){
	int num,n,count=0;
	printf("Enter the number:\n");
	scanf("%d",&num);
		printf("Enter the number to count:\n");
	scanf("%d",&n);
	
	while(num!=0){

	if((num%10)==n){
		count++;
	}
		num/=10;
	}
	printf("%d",count);
	
	
	
	return 0;
}
