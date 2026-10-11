#include <stdio.h>

int main(){
	int i=1,j=6;
	while(i <= 4 || j >= 0){
		i+=2;
	
		printf(" %d , %d ",i,j);
			j-=2;
		
	}
	printf(" %d , %d ",i,j);
	return 0;
}
