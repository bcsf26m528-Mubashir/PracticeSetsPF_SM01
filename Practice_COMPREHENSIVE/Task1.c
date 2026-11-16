#include <stdio.h>

int main(){
	int sec,hr,min,sec2;
	printf("Give Seconds:\n");
	scanf("%d",&sec);
	hr=sec/3600;
	min=(sec%3600)/60;
	sec2=(sec%3600)%60;
	if(hr<10 && min<10 && sec2<10){
	
printf("0%d:0%d:0%d",hr,min,sec2);
	
}
else{
	printf("%2d:%2d:%2d",hr,min,sec2);
}
	

	
	
	return 0;
}
