//2- Check Number is even or odd


#include <stdio.h>

int main(){
	int num,condition;
	printf("Write number:\n");
	scanf("%d",&num);
    condition=num & 1;
    if(condition){
    	printf("Odd");
	}
	else{
		printf("Even");
	}
	return 0;
}
