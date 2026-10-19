#include <stdio.h>

int main(){
	int n,isPrime,i=2;
printf("Enter a number:\n");
scanf("%d",&n);
if(n==1){
	printf("Neither Prime Nor Composite");
}
else if(n>1){
	isPrime+=1;
	while(i<n){
		if(n%i==0){
			printf("Not a prime number");
			return 0;
		}
	
		i++;
	}
	printf("Prime Number");
	return 0;

}



}
