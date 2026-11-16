#include <stdio.h>

int main(){
	int length,i,j,sumEven=0,sumOdd=0;
	printf("Enter array length \n");
	scanf("%d",&length);
    int arr[length];
    
    for(i=0;i<length;i++) {
    	printf("Enter array element\n");
	scanf("%d",&arr[i]); //Storing user inputs in array
    	
}
    
    for(j=0;j<length;j++){
    if(arr[j]%2==0) sumEven+=arr[j];
    else sumOdd+=arr[j];
	}
	printf("Even: %d\n",sumEven);
	printf("Odd: %d\n",sumOdd);
	
	
	return 0;
}
