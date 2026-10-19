#include <stdio.h>

int main(){
	int n,digit,EVEN=0,ODD=0;
	printf("Enter the number:\n");
	scanf("%d",&n);
	while(n!=0){
		digit=n%10;
		if(digit%2==0){
			EVEN++;
		}
		else if(digit%2!=0){
			ODD++;
		}
		n/=10;
	}
	printf("Even:%d\nOdd:%d",EVEN,ODD);
	
	
	
	return 0;
}
