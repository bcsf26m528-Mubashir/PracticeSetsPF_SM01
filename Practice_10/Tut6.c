#include <stdio.h>

int main(){
	int count=0,n;
	printf("Enter the number:\n");
	scanf("%d",&n);
	while(n!=0){
		count++;
		n/=10;
	}
	printf("%d",count);
	
	
	
	return 0;
}
