#include <stdio.h>

int main(){
	int length=5,i;
	int arr[5]={1,2,5};
    int sum=0;
    for(i=0;i<length;i++){
    sum+=arr[i];	
	}
	printf("Sum of array elements is: %d",sum);
	return 0;
}
