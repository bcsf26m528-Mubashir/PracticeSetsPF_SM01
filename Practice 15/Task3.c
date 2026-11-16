#include <stdio.h>

int main(){
	int length,i,j,countEven=0,countOdd=0;
	printf("Enter array length \n");
	scanf("%d",&length);
    int arr[length];
    
    for(i=0;i<length;i++) {
    	printf("Enter array element\n");
	scanf("%d",&arr[i]); //Storing user inputs in array
    	
}
    
    for(j=0;j<length;j++){
    if(arr[j]%2==0) countEven++;
    else countOdd++;
	}
	printf("Even: %d\n",countEven);
	printf("Odd: %d\n",countOdd);
	
	
	return 0;
}
