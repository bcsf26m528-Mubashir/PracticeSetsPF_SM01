#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
	srand(time(0));
	unsigned char n=0;
	int sum;
	int count=0;
	if((n&1)) {
		count++;
		sum+=(n&1);
	}

	if((n&(1<<1))){
		count++;
	sum+=(n&(1<<1));
	} 
	if((n&(1<<2))){
		count++;
	sum+=(n&(1<<2));
	} 
	if((n&(1<<3))){
		count++;
	sum+=(n&(1<<3));
	}
	if((n&(1<<4))){
		count++;
	sum+=(n&(1<<4));
	}
		if((n&(1<<5))){
		count++;
	sum+=(n&(1<<5));
	}
		if((n&(1<<6))){
		count++;
	sum+=(n&(1<<6));
	}
		if((n&(1<<7))){
		count++;
	sum+=(n&(1<<7));
	}

	printf("Number=%d\n",n);
	printf("Count=%d",count);
	
	if((count&1)!=0) printf("\nODD count");
	else{
		printf("\nEven count");
	}
	if(count==0) printf("\No bit is ON");
	else if(count==8) printf("\nAll bits are on");
	return 0;
	
     
     

}
