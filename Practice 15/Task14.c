#include <stdio.h>

int main(){
    int n,i,j,count=0,found;
    scanf("%d",&n);

    int arr[n];

    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    for(i=0;i<n;i++){
        found=0;

        for(j=0;j<i;j++){
            if(arr[i]==arr[j]){
                found=1;
                break;
            }
        }

        if(found==0){
            printf("%d ",arr[i]);
            count++;
        }
    }

    printf("\nUnique count: %d",count);
}
