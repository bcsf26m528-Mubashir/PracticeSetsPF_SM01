#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
	srand(time(0));
	int n;
	printf("Enter a number:\n");
	scanf("%d",&n);
    if((n&7)==0){
    	printf("Divisble by 8");
	}
	else if((n&3)==0 && (!((n&7)==0))){
		printf("Divisble by 4 but not by 8");
	}
    else{
    	printf("Not divisble by 4");
	}
	return 0;
}
