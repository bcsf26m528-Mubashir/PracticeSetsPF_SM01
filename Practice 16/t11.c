#include <stdio.h>


int main(){
	int i,j,counted=0,size,k,deleted=0,count=0;
	printf("Enter size of array: \n");
	scanf("%d",&size);
	int arr[size];
	for(i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}
	
    for(i=0;i<size-deleted;i++){
    	counted=arr[i];
    		count=0;
    	for(j=0;j<size-deleted;j++){
    		if(counted==arr[j]){
    			count++;
    			if(count>1){
//				printf("count=%d ,number=%d\n",count,counted);
    			for(k=j;k<size;k++){
    				arr[k]=arr[k+1];
				}
				deleted++;
			
			}
			}
		}
	}
	
	for(i=0;i<size-deleted;i++){
		printf("%d ",arr[i]);
	}


	
	
	
	return 0;
}
