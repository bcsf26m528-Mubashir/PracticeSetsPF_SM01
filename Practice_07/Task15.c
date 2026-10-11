#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
 unsigned char n=150,k=9,newValueLeft,newValueRight;
 if(k>1 && k<=7){
 	newValueLeft=(n<<k) | (n>>(8-k));
 	newValueRight=(n>>k) | (n<<(8-k));
 	printf("Value Left:%hhu Value Right:%hhu",newValueLeft,newValueRight);
 }
else{
	printf("Invalid shift amount");
}
     

}
