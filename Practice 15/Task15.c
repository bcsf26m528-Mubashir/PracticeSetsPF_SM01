#include <stdio.h>

int main(){
	int length,i,j,temp;
	printf("Enter array length \n");
	scanf("%d",&length);
    int arr[length];
 
    
    for(i=0;i<length;i++) {
    	printf("Enter array element\n");
	scanf("%d",&arr[i]); //Storing user inputs in array
    	
}
temp=arr[0];
  for(j=0;j<length-1;j++) {
  arr[j]=arr[j+1];
}
arr[length-1]=temp;
for(i=0;i<length;i++) printf("%d ",arr[i]);
}
  
