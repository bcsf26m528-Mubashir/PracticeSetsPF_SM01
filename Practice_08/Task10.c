#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
	srand(time(0));
	int first,sec;
	int x=rand()%99+10;
	first=x/10;
	sec=x%10;

	printf("Number:%d  Sum:%d",x,(first+sec));
}
