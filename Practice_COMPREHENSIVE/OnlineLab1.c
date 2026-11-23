#include <stdio.h>
#define SIZE 20

int main(){
    int i,j,count=0,arr[SIZE],yes=0,dup,missing;

    for(i=0;i<SIZE;i++){
        scanf("%d",&arr[i]);
    }

    for(i=0;i<SIZE;i++){
        for(j=i+1;j<SIZE;j++){
            if(arr[i]==arr[j]){
                dup=arr[i];
                yes=1;
                break;
            }
        }
        if(yes){
            break;
        }
    }

    for(i=1;i<=SIZE;i++){
        count=0;
        for(j=0;j<SIZE;j++){
            if(i==arr[j]){
                count++;
                break;
            }
        }

        if(!count){
            missing=i;
        }
    }

    printf("Missing Shipment: %d\n",missing);
    printf("Duplicate Shipment: %d",dup);

    return 0;
}
