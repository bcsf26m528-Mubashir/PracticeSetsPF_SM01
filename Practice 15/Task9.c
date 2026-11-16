#include <stdio.h>

int main(){
	int length,i,j,k=0;
	printf("Enter array length \n");
	scanf("%d",&length);
    int arr[length];
    
    
    for(i=0;i<length;i++) {
    	printf("Enter array element\n");
	scanf("%d",&arr[i]); //Storing user inputs in array
    	
}
    
    for(j=0;j<length;j++){
    if(arr[j]<0) {
    	k++;
	}
	}
	int arr2[k];
	int index=0;
	  for(j=0;j<length;j++){
    if(arr[j]<0) {
    arr2[index]=arr[j];
    index++;
	}
	}
	

	if(k==0){
		printf("None");
		 printf("\ncount: %d  \n",k);
		 return 0;
	}
		printf("Array of Negative: ");
 for(j=0;j<k;j++) printf("%d",arr2[j]);
 printf("\ncount: %d  \n",k);	
	
	return 0;
}
