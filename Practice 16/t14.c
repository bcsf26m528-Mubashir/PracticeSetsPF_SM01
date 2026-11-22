#include <stdio.h>


int main(){
	int i=0,j=0,count=0,size,k=0,swapped=1;
	printf("Enter size of array: \n");
	scanf("%d",&size);
	int arr[size];
	for(i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}
	
  for(i=0;i<size-1;i++){
  	swapped=0;
  	for(j=0;j<size-i-1;j++){
  		if(arr[j]>arr[j+1]){
  			int temp=arr[j];
  			arr[j]=arr[j+1];
  			arr[j+1]=temp;
  			swapped++;
		  }
	
	  }  
	  printf("\n");
	  if(swapped){
	  
	  for(k=0;k<size;k++){
		printf("%d ",arr[k]);
	}	
}
  }
		  	
  	
	
	return 0;
}
