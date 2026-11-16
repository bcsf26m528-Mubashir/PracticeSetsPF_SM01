#include <stdio.h>

int main(){
	int length,i,j;
	printf("Enter array length \n");
	scanf("%d",&length);
    int arr[length];
    int arr2[length];
    
    for(i=0;i<length;i++) {
    	printf("Enter array element\n");
	scanf("%d",&arr[i]); //Storing user inputs in array
    	arr2[i]=2*arr[i];
    	
}
printf("First Array: ");
for(j=0;j<length;j++) printf("%d ",arr[j]);
printf("\nSecond Array: ");
for(j=0;j<length;j++) printf("%d ",arr2[j]);

	}

