#include <stdio.h>

int main(){
	int lineNo=13,NOS=0;
	int i,n;
//	printf("Enter Number:\n");
//	scanf("%d",&n);
	for(i=100;i>=1;i--){
			
		printf(" ");
		NOS+=1;


		if(lineNo==NOS){
	
			printf("%d ",lineNo);
			printf("\n");
			lineNo-=1;
			NOS=0;
		}
		
	}
	
	return 0;
}
