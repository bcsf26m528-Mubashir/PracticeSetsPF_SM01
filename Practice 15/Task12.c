#include <stdio.h>

int main(){
	int length,i,j,count=0;
	printf("Enter array length \n");
	scanf("%d",&length);
    int arr[length];
 
    
    for(i=0;i<length;i++) {
    	printf("Enter array element\n");
	scanf("%d",&arr[i]); //Storing user inputs in array
    	
}
  for(j=0;j<length-1;j++) {

    if(arr[j]<arr[j+1])count++;
}
if(count==(length-1)) printf("Sorted %d",count);
else printf("Not Sorted %d",count);
}
  
