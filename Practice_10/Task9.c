#include <stdio.h>

int main(){
	int lineNo=1,NOL=0,general=1;
	int i,n;
	printf("Enter Number:\n");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		printf("%d ",general);
	   
		NOL+=1;
		general+=1;
		if(lineNo==NOL){
			printf("\n");
			lineNo+=1;
			NOL=0;
			general=1;
		}
		
	}
	
	return 0;
}
