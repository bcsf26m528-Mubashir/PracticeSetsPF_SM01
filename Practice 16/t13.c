#include <stdio.h>


int main(){
	int i,j,count=0,countPrev=0,mostPrev=0,indexPrev=0,size,k;
	printf("Enter size of array: \n");
	scanf("%d",&size);
	int arr[size];
	for(i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}
	
    for(i=0;i<size;i++){
    	count=0;
    	
    	for(j=0;j<size;j++){
    		if(arr[i]==arr[j]){
    			count++;
			}
		}
		if(count>countPrev){	
    	mostPrev=arr[i];
    	indexPrev=i;
    	countPrev=count;
    }
}
	
if(countPrev!=1){
	printf("%d ocuured mostly with %d times",mostPrev,countPrev);
}
else{
	printf("None");
}

	
	
	
	return 0;
}
