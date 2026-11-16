#include <stdio.h>

int main(){
	int length,i,j,temp;
	printf("Enter array length \n");
	scanf("%d",&length);
    int arr[length];
    int arr2[length];
    
    for(i=0;i<length;i++) {
    	printf("Enter array element\n");
	scanf("%d",&arr[i]); //Storing user inputs in array
    	
}
   for(i=0;i<length;i++){
   	arr2[i]=arr[i];
   }
    temp=arr2[0];
    arr2[0]=arr[length-1];
    arr2[length-1]=temp;
    printf("Array: ");
for(j=0;j<length;j++) printf("%d ",arr2[j]);


	}

