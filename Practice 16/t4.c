#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	srand(time(0));
	int size=10;
	int arr[size],i,j,toR=0,withR=0;
	for(i=0;i<size;i++){
		arr[i]=rand()%10+1;
		printf("%d ",arr[i]);
	}
	printf("\nReplace Number:\n");
	scanf("%d",&toR);
	printf("With Number:\n");
	scanf("%d",&withR);

	for(j=0;j<size;j++){
		if(arr[j]==toR){
			arr[j]=withR;
		}
		
	}
	 for(i=0;i<size;i++){
   	printf("%d ",arr[i]);
   }
  
	
	return 0;
}
