#include <stdio.h>

int main(){
	int length,i,j,largest=0,index=0;
	printf("Enter array length \n");
	scanf("%d",&length);
    int arr[length];
    
    for(i=0;i<length;i++) {
    	printf("Enter array element\n");
	scanf("%d",&arr[i]); //Storing user inputs in array
    	
}
    largest=arr[0];
    for(j=1;j<length;j++){
    if(arr[j]>largest){
    	largest=arr[j];
    	index=j;
	}

	}
	printf("Largest: %d\n",largest);
	printf("Index: %d\n",index);
	
	
	return 0;
}
