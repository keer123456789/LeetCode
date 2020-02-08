//
// Created by keer on 2020/2/8.
//
#include <string.h>
#include <stdlib.h>
char * convert(char * s, int numRows){
    int len=strlen(s);
    if(numRows<=1){
        return s;
    }
    char *a=(char *)malloc(sizeof(char)*(len+1));
    int step=2*numRows-2;
    int numsize=0;
    for(int i=0;i<numRows;i++){
        for(int j=0;j<len;j++){
            int k=j%step;
            if(k==i||k==step-i){
                a[numsize++]=s[j];
            }
        }
    }
    a[numsize]='\0';
    return a;
}