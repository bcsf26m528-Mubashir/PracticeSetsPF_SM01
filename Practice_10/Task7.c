#include <stdio.h>

int main(){
	int prod=1,n;
	printf("Enter the number:\n");
	scanf("%d",&n);
	while(n!=0){
		prod*=(n%10);
		n/=10;
	}
	printf("%d",prod);
	
	
	
	return 0;
}
