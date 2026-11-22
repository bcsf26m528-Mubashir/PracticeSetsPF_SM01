#include <stdio.h>


int main(){
	int i=0,j=0,count=0,size,k=0,minIndex=0;
	printf("Enter size of array: \n");
	scanf("%d",&size);
	int arr[size];
	for(i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}
	
  for(i=0;i<size-1;i++){
     minIndex=i;
  	for(j=i+1;j<size;j++){
  	
  		if(arr[j]<arr[minIndex]) minIndex=j;
 
	  }  
    int temp=arr[i];
    arr[i]=arr[minIndex];
    arr[minIndex]=temp;
  }
		  	
  	  for(k=0;k<size;k++){
  	  	if(arr[k]%2==0){		
		printf("%d ",arr[k]);
	}
	}	
	  for(k=0;k<size;k++){
  	  	if(arr[k]%2!=0){		
		printf("%d ",arr[k]);
	}
	}	
	
	return 0;
}
