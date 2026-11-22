#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	srand(time(0));
	int size=10;
	int arr[size],i,j,minIndex=0;
	for(i=0;i<size;i++){
		arr[i]=rand()%10+10;
		printf("%d ",arr[i]);
	}
	
   
    	minIndex=0;
    	for(j=1;j<size;j++){
    		if(arr[j]<arr[minIndex]){
    		minIndex=j;
    		arr[0]=arr[minIndex];
			}
			
		}

   printf("\n");
	 for(i=0;i<size;i++){
   	printf("%d ",arr[i]);
   }
	
	
	return 0;
}
