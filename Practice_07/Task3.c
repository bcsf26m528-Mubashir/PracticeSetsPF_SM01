//3- Integer * and / using shift operators


#include <stdio.h>

int main(){
	unsigned int num;
	printf("Write number:\n");
	scanf("%d",&num);
    if(0<num<1000){
    	printf("%d * 3=%d\n",num,num << 3);
    	printf("%d / 3=%d\n",num,num >> 2);
	}
	return 0;
}
