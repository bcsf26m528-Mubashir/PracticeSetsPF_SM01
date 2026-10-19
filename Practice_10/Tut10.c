	
	#include <stdio.h>
	
	int main() {
	    int num,rem,place=1,binary;
	    printf("Enter the number:\n");
		scanf("%d",&num);
	    while(num>0){
	    	rem=num%2;
	    	binary=binary+(rem*place);
	    	place*=10;
	    	num/=2;
		}		
		printf("Binary Number: %d",binary);
	    return 0;
	}

