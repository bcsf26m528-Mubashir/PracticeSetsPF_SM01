#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	srand(time(0));
	int size=10;
	int arr[size],i,j,count=0,target,aldel=0;
	for(i=0;i<size;i++){
		arr[i]=rand()%7+1;
		printf("%d ",arr[i]);
	}
   printf("\nEnter element to remove:\n");
   scanf("%d",&target);
   for(i=0;i<size;i++){
   	if(aldel==0){
	   
   if(arr[i]==target){
   	for(j=i;j<size;j++){
   		arr[j]=arr[j+1];
	   }
	   aldel=arr[i];
   }
}
   }
   
   printf("\n");
   for(i=0;i<size-1;i++){
   	printf("%d ",arr[i]);
   }
	
	
	return 0;
}
