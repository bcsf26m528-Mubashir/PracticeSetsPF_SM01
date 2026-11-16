#include <stdio.h>

int main(){
    int n,i,d;
    int count[10]={0};

    scanf("%d",&n);

    for(i=0;i<n;i++){
        scanf("%d",&d);
        count[d]++;
    }

    for(i=0;i<10;i++){
        if(count[i]>0)
            printf("%d: %d\n",i,count[i]);
    }
}
