//
// Created by keer on 2020/1/30.
//
#include <stdlib.h>
char * removeOuterParentheses(char * S){
    char *a=(char *)malloc(10000* sizeof(char));
    char *s=S;
    int sum=0,i=0,j=0, k=1;
    for(j=0;S[j]!='\0';){

        if(S[j]=='('){
            sum++;
        } if(S[j]==')'){
            sum--;
        }

        if(sum==0){
            for(;k<j;k++){
                a[i]=s[k];
                i++;
            }
            k=k+2;
        }
        j++;
    }
    S=a;
    return S;
}
