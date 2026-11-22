#include <stdio.h>


int main(){
	int i,j,count=0,counted=0,size,k;
	printf("Enter size of array: \n");
	scanf("%d",&size);
	int arr[size];
	for(i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}
	
    for(i=0;i<size;i++){
    	counted=arr[i];
    		count=0;
    	for(j=0;j<size;j++){
    		if(counted==arr[j]){
    			count++;
			}
			}
		if(count==1){
			printf("%d ",counted);
		}	
			
		}
	


	
	
	
	return 0;
}
