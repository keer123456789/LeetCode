//
// Created by keer on 2020/2/1.
//

#include <stdlib.h>

int* sumZero(int n, int* returnSize){
    int* a=(int*)malloc(sizeof(int) * n);
    *returnSize = 0;
    int i,sum=0;
    if(n==1){
        a[n-1]=0;
    }else{
        for(i=0;i<n-1;i++){
            a[i]=rand()%10;
            sum=sum+a[i];
        }
        a[i]=0-sum;
    }
    *returnSize = n;

    return a;
}