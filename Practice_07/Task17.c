#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
	srand(time(0));
		int x,y,z;
		x=rand()%100+1;
		y=rand()%100+1;
		z=rand()%100+1;
		printf("x:%d , y:%d, z:%d\n",x,y,z);
	    z=x^z;
		x=x^z;
		z=x^z;
		x=x^y;
		y=x^y;
		x=x^y;
		printf("x:%d , y:%d, z:%d",x,y,z);
		
     
     

}
