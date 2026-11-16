#include <stdio.h>

int main(){
	int length,i,j,largest=0,index=0,smallest=0,index2=0;
	printf("Enter array length \n");
	scanf("%d",&length);
    int arr[length];
    
    for(i=0;i<length;i++) {
    	printf("Enter array element\n");
	scanf("%d",&arr[i]); //Storing user inputs in array
    	
}
    largest=arr[0];
    smallest=arr[0];
    for(j=1;j<length;j++){
    if(arr[j]>largest){
    	largest=arr[j];
    	index=j;
	}

	}
	 for(j=1;j<length;j++){
    if(arr[j]<smallest){
    	smallest=arr[j];
    	index2=j;
	}

	}
	printf("Largest: %d at %d\n",largest,index);
    printf("Smallest: %d at %d\n",smallest,index2);
	
	
	return 0;
}
