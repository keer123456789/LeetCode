//
// Created by keer on 2020/2/7.
//
#include <stdlib.h>
char * longestPalindrome(char * s){
    char *p,*flag;
    int maxlong=1,num=1;
    p=s;
    for(;*s!='\0';){
        num=1;
        p++;
        for(;*s!=*p;){
            num++;
            p++;
        }
        if(maxlong<num){
            maxlong=num;
            flag=s;
        }
        s++;
        p=s;
    }
    char *a=(char *)malloc(sizeof(char)*maxlong);
    for(int i=0;i<=maxlong;i++){
        a[i]=*flag;
        flag++;
    }
    return a;
}