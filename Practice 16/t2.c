#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	srand(time(0));
	int size=10;
	int arr[size],i,j,count=0,target=8;
	for(i=0;i<size;i++){
		arr[i]=rand()%1000+1;
		printf("%d ",arr[i]);
	}
   
   for(i=target;i<size;i++){
   	arr[i]=arr[i+1];
   }
   
   printf("\n");
   for(i=0;i<size-1;i++){
   	printf("%d ",arr[i]);
   }
	
	
	return 0;
}
