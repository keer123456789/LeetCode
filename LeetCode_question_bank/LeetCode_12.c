//
// Created by keer on 2020/2/17.
//
#include <stdlib.h>
#include <string.h>
char * intToRoman(int num){
    struct hash
    {
        int interger;
        char *roman;
    }Hash[13] = {
            1000, "M",
            900,  "CM",
            500,  "D",
            400,  "CD",
            100,  "C",
            90,   "XC",
            50,   "L",
            40,   "XL",
            10,   "X",
            9,    "IX",
            5,    "V",
            4,    "IV",
            1,    "I",
    };
    char res[16]={0x0};
    char *s=res;
    for(int i=0;i<13;i++){
        for(;num>=Hash[i].interger;){
            num=num-Hash[i].interger;
            strcat(res, Hash[i].roman);
        }
    }
    return s;
}