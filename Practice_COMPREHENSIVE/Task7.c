#include <stdio.h>

int main(){
int num,num2,i,countD,countI,length=0;
printf("Enter Number:\n");
scanf("%d",&num);
num2=num;

while (num>0){

	num/=10;
		length+=1;
}

for(i=0;i<length;i++){
int dig1=num2%10;
num2/=10;	
int dig2=2;
printf("%d \n %d",dig1,num);

if(dig2<dig1) countI;
if(dig2>dig1) countD;

}
if(countI==length) printf("Increasing");
if(countD==length) printf("Decreasing");
else printf("Neither");



  return 0;
}
