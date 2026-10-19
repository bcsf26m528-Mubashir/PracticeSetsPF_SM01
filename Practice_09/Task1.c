#include <stdio.h>

int main(){
	int phy,math,com,entry,total,income;
	float per;
	printf("Ente marks:\n");
	scanf("%d %d %d",&phy,&math,&com);
	printf("Ente marks of entry test:\n");
	scanf("%d",&entry);
	total=phy+math+com;
	if((0<=phy && phy<=100) && (0<=math && math<=100) && (0<=com && com<=100) && (0<=entry && entry<=100)){
		if(phy<40 || math<40 || com<40){
			printf("Rejected");
			return 0;
		}
		else{
			
			per=(total/300.0)*100.0;
					printf("Percentage:%f\n",per);
			if(per>=85){
				if(entry>=80){
			printf("Admission Status:Accepted\n");
					printf("Full Scholarship");
				}
				else if(entry>=60){
		printf("Admission Status:Accepted\n");
					printf("Half Scholarship");
				}
				else{
					printf("Admission Status:Accepted\n");
				}
			
			}
					else	if(per>=70 && per<85){
				if(entry>=70){
			
					printf("Half Scholarship");
				}
			else{
				printf("Admission Status:Accepted\n");
			}

			
			}
						else	if(per>=60 && per<70){
				if(entry>=80){
			printf("Admission Status:Accepted\n");
				}
else{
	printf("Admission Status:Waiting\n");
}
			
			}
					if(per<60){
	              printf("Admission Status :Rejected");
			}
		}
	}
	else{
		printf("Invalid Input");
	}
	
	return 0;
}
