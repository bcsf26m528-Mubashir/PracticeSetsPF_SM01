#include <stdio.h>


int main(){
	int mids, ses, per,i;
	float grade;
    do{
	printf("--------Write Details Correctly--------------\n");
	printf("Enter mids marks:\n");
	scanf("%d",&mids);
	printf("Enter sessional marks:\n");
	scanf("%d",&ses);
	printf("Enter grade:\n");
	scanf("%f",&grade);
}while(mids>35 || ses>25 || grade>4.0f);
	
	if(grade==4.0f) per=85;
	if(grade==3.7f) per=80;
	if(grade==3.3f) per=75;
	if(grade==3.0f) per=70;
	if(grade==2.7f) per=65;
	if(grade==2.3f) per=61;
	if(grade==2.0f) per=58;
	if(grade==1.7f) per=55;
	if(grade==1.0f) per=50;
	
	int sum=mids+ses;
	int min=per-sum;

	if(min>40){
		printf("UnAchievable");
	}
	else{
	
		printf("Required marks in finals:%d\n",min);
	}
	
	
	
	return 0;
}
