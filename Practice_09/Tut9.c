//#include <stdio.h>
//
//int main(){
//	int count=0,n;
//	printf("Enter the number:\n");
//	scanf("%d",&n);
//	printf("1");
//	while(n!=0){
//		count++;
//		n/=10;
//	
//	}
//	while(count>1){
//		printf("0");
//		count--;
//	}
//
//	
//	
//	
//	return 0;
//}


#include <stdio.h>

int main(){
	int n,TDW=1,temp;
	printf("Enter the number:\n");
	scanf("%d",&n);

    temp=n;
    while(temp>=10){
    	TDW*=10;
    	temp/=10;
	}
    printf("%d",TDW);

	return 0;
}
