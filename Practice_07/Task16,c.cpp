#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
	int n=40;
	
	if(n>0 && ((n & (n-1))==0)) printf("Power of 2");
	else{
		printf("Not power of 2");
	}
    if(n>0){
    	printf("\nLowest ON bit:%hhu",(n&((~n+1))));
	}
     

}
