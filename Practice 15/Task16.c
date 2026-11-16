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
printf("%d ",arr[0]);
  for(j=1;j<length;j++) {
   int sum=0;
   for(i=0;i<=j;i++){
   	sum+=arr[i];
   }
   printf("%d ",sum);
}

}
  
