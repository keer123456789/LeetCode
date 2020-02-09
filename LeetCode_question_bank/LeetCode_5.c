//
// Created by keer on 2020/2/7.
//
#include <stdlib.h>
char * longestPalindrome(char * s){
    char *p,*flag;
    int maxlong=0,num;
    p=s;
    for(;*s!='\0';){
        num=1;
        p++;
        for(;*s!=*p&&*p!='\0';){
            num++;
            p++;
            if(*p=='\0'){
                num=0;
            }
        }
        if(maxlong<num){
            maxlong=num;
            flag=s;
        }
        s++;
        p=s;
    }
    char *a=(char *)malloc(sizeof(char)*(maxlong+2));
    int i=0;
    for(;i<=maxlong;i++){
        a[i]=*flag;
        flag++;
    }
    a[i]='\0';
    return a;
}