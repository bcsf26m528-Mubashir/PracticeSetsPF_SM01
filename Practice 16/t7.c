#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	srand(time(0));
	int size=5;
	int arr[5]={5,1,4,2,8},i,j,minIndex=0;
	for(i=0;i<size;i++){
		printf("%d ",arr[i]);
	}
	
   

   	for(j=0;j<size-1;j++){
   		if(arr[j]>arr[j+1]){
   			int temp=arr[j];
   			arr[j]=arr[j+1];
   			arr[j+1]=temp;
		   }
   		
	   }
   	

   
   
   
   
    	
   printf("\n");
	 for(i=0;i<size;i++){
   	printf("%d ",arr[i]);
   }
	
	
	return 0;
}
