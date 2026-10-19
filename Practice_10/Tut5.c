#include <stdio.h>

int main(){
	int lineNo=13,NOS=0;
	int i,n=1;

	for(i=100;i>=1;i--){
			
		printf(" ");
		NOS+=1;


		if(lineNo==NOS){
	
			printf("%d ",n);
			printf("\n");
			lineNo-=1;
			NOS=0;
			n+=1;
		}
		
	}
	
	return 0;
}
