#include <stdio.h>

int main(){
	int i=1,j=20;
	while(i <= 10 && j >= 0){
		i+=2;
	
		printf(" %d , %d ",i,j);
			j-=3;
		
	}
	printf(" %d , %d ",i,j);
	return 0;
}
