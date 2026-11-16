#include <stdio.h>
#include <limits.h>
int main(){
	int length,i,j,largest=0,indexOfSecLargest=0;
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
	}

	}

	int arr2[length];
	 for(j=0;j<length;j++){
   int diff1=largest-arr[j];
   arr2[j]=diff1;
	}

   int smallestDiff = INT_MAX;
    for (j = 0; j < length; j++) {
        if (arr2[j] > 0 && arr2[j] < smallestDiff) {
            smallestDiff = arr2[j];
            indexOfSecLargest = j;
        }
    }
    
	
	printf("The second largest element is %d",arr[indexOfSecLargest]);
	
	

	
	
	return 0;
}
