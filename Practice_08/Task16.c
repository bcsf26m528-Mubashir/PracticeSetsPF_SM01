
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int a, b,c;


    srand(time(NULL));

    a = rand() % 90 + 10;
    b = rand() % 90 + 10;
    c=  rand() % 90 + 10;
    printf("A: %d, B: %d , C:%d \n", a, b,c);
if(a<b){
	if(b<c) printf("%d %d %d",a,b,c);
	else{
		if(a<c) printf("%d %d %d",a,c,b);
		else printf("%d %d %d",c,a,b);
	}
}
else{
	if(a<c) printf("%d %d %d",b,a,c);
	else{
		if(b<c) printf("%d %d %d",b,c,a);
		else printf("%d %d %d",c,b,a);
	}
}
    

  
}

