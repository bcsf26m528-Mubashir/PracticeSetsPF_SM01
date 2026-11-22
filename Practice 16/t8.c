#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	srand(time(0));
	int size=8;
	int arr[8]={8,7,6,5,8,4,8,3},i,j,k,alC[size],count=1,found=0;
	for(i=0;i<size;i++){
		printf("%d ",arr[i]);
	}
	alC[0]=arr[0];
	for(j=1;j<size;j++){
		found=0;
		for(k=0;k<count;k++){
			if(arr[j]==alC[k]){
				found=1;
			}
		}
		if(!found){
			alC[count]=arr[j];
		count++;
	
	}
	}
   

   
   printf("\nDistinct Values: %d",count);

	
	
	return 0;
}
