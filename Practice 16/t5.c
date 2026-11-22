#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	srand(time(0));
	int size=10;
	int arr[size+1],i,j,count=0,targetIndex,value=0;
	for(i=0;i<size;i++){
		arr[i]=rand()%10+1;
		printf("%d ",arr[i]);
	}
      printf("\nWrite index to put element:\n");
   scanf("%d",&targetIndex);
   for(i=size-1;i>targetIndex;i--){
   	arr[i]=arr[i-1];
   }
   
   printf("Write value to put:\n");
   scanf("%d",&value);
   arr[targetIndex]=value;
   printf("\n");
   for(i=0;i<size;i++){
   	printf("%d ",arr[i]);
   }
	
	
	return 0;
}
