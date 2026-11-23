#include <stdio.h>
#define SIZE 10

int main(){
	int n,i,j,count,arr[100],freq[SIZE]={0};
	int max=0,min=100;

	scanf("%d",&n);

	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}

	for(i=0;i<SIZE;i++){
		count=0;
		for(j=0;j<n;j++){
			if(i==arr[j]){
				count++;
			}
		}
		freq[i]=count;
		printf("Snack %d purchased %d times\n",i,freq[i]);
	}

	for(i=0;i<SIZE;i++){
		if(freq[i]>max){
			max=freq[i];
		}
		if(freq[i]>0 && freq[i]<min){
			min=freq[i];
		}
	}

	for(i=0;i<SIZE;i++){
		if(freq[i]==max){
			printf("Most Popular Snack: %d\n",i);
			break;
		}
	}

	for(i=0;i<SIZE;i++){
		if(freq[i]==min){
			printf("Least Popular Snack: %d\n",i);
			break;
		}
	}

	return 0;
}
