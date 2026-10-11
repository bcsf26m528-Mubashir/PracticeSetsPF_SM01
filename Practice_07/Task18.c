#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
	srand(time(0));
	unsigned char x,y,condition;
	x=5;
	y=10;
	condition=x^y;
	printf("%hhu %hhu %hhu\n",x,y,condition);
	if(condition==0){
		printf("Identical");
	}
	else if(condition!=0 && (condition&(condition-1))==0){
		printf("Differ by exactly one bit");
	}
	else{
		printf("Differ in multiple bits");
	}
		
     
     

}
