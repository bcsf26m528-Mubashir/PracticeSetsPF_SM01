#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	int size,i,j,yes=0;

    scanf("%d",&size);
    	int arr[size];
    for(i=0;i<size;i++){
    	scanf("%d",&arr[i]);
	}
	for(i=0;i<size;i++){
		for(j=i+1;j<size;j++){
			if(arr[i]==arr[j]){
				yes=1;
				break;
			}
			
		}
		
		
	}
	if(yes){
		printf("Duplicates found");
	}
	else if(!yes){
		printf("All different");
	}

	
	
	return 0;
}
