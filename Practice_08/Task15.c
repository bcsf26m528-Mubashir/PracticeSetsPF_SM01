#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
	srand(time(0));
    int h,t,o;
    int largest;
	int x=rand()%999+100;
	h=x/100;
	t=(x%100)/10;
	o=x%10;
	printf("%d",x);
    printf("H:%d , T:%d , O:%d",h,t,o);

    if(t>h && t>o) largest=t;
    if(h>t && h>o) largest=h;
    if(o>t && o>h) largest=o;
    
    printf("\nLargest is %d\n",largest);
    if(!(t==h || h==o || o==t)){
    	printf("All digits are different");
	}
  
}
