#include <stdio.h>

int main(){
	int lineNo=1,NOL=0;
	int i,n;
	printf("Enter Number:\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		printf("%d ",i);
		NOL+=1;
		if(lineNo==NOL){
			printf("\n");
			lineNo+=1;
			NOL=0;
		}
		
	}
	
	return 0;
}
