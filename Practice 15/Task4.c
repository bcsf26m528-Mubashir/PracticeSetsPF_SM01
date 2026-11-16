#include <stdio.h>

int main(){
    int i,j;
    int arr[5]={12,22,31,33,52};
    int ToFind=5;
    
    for(j=0;j<5;j++){
   if(arr[j]==ToFind){
   	 printf("Found at index: %d",j);
   	 return 0;
   }
   
	}
	printf("Not found");
	

	
	
	return 0;
}
