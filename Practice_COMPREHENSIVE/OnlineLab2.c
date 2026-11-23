#include <stdio.h>

int main(){
	int n,k,i,j,count,size=0,temp;
	int arr[100],num[100],freq[100];

	scanf("%d %d",&n,&k);

	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}

	for(i=0;i<n;i++){
		count=0;

		for(j=0;j<size;j++){
			if(arr[i]==num[j]){
				break;
			}
		}

		if(j==size){
			for(j=0;j<n;j++){
				if(arr[i]==arr[j]){
					count++;
				}
			}

			if(count>=k){
				num[size]=arr[i];
				freq[size]=count;
				size++;
			}
		}
	}

	for(i=0;i<size;i++){
		for(j=0;j<size-i-1;j++){
			if(freq[j]<freq[j+1]){
				temp=freq[j];
				freq[j]=freq[j+1];
				freq[j+1]=temp;

				temp=num[j];
				num[j]=num[j+1];
				num[j+1]=temp;
			}
			else if(freq[j]==freq[j+1]){
				if(num[j]>num[j+1]){
					temp=freq[j];
					freq[j]=freq[j+1];
					freq[j+1]=temp;

					temp=num[j];
					num[j]=num[j+1];
					num[j+1]=temp;
				}
			}
		}
	}

	for(i=0;i<size;i++){
		printf("%d %d\n",num[i],freq[i]);
	}

	return 0;
}
