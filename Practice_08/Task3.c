#include <stdio.h>

int main(){
	int i=2;
	while(i<=20){
		if((i&1)==0) printf(" %d ",i);
		i++;
	}
	return 0;
}
