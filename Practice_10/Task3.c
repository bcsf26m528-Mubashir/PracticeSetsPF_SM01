#include <stdio.h>

int main(){
	int count=0,n;
	printf("Enter the number:\n");
	scanf("%d",&n);
	printf("1");
	while(n!=0){
		count++;
		n/=10;
	
	}
	while(count>1){
		printf("0");
		count--;
	}

	
	
	
	return 0;
}
