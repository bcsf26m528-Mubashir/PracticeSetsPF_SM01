#include <stdio.h>


int main(){
	int i,j,count=0,size;
	printf("Enter size of array: \n");
	scanf("%d",&size);
	int arr[size];
	for(i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}
	
   for(i=0;i<10;i++){
   	count=0;
   	for(j=0;j<size;j++){
   		if(i==arr[j]) {
		   count++;
		   break;
	}
	   }

	   if(!count){
	   	printf("%d ",i);
	   }
   }


	
	
	
	return 0;
}
