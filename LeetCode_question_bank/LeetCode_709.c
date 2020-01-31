//
// Created by keer on 2020/1/30.
//

#include <stdio.h>

char * toLowerCase(char * str){
    for(int i=0;str[i]!='\0';i++){
        if(str[i]>='A'&&str[i]<='Z'){
            str[i]=(str[i])+32;
        }
    }
    return str;
}