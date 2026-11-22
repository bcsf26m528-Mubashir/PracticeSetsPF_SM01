#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	srand(time(0));
	int size=10;
	int arr[size],i,j,count=0,target;
	for(i=0;i<size;i++){
		arr[i]=rand()%5+1;
		printf("%d ",arr[i]);
	}
	printf("\nEnter number to find: \n");
	scanf("%d",&target);

	for(j=0;j<size;j++){
		if(arr[j]==target){
			count++;
		}
	}
	printf("%d occured %d times",target,count);

	
	
	return 0;
}
