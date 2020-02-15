//
// Created by keer on 2020/2/14.
//

#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
bool isMatch(char * s, char * p){
    bool **flag = (bool **)malloc(sizeof(bool *)*(strlen(s)+1));
    for(int i = 0;i<=strlen(s);i++){
        flag[i] = (bool *)malloc(sizeof(bool) *(strlen(p)+1));
    }

    for(int i=0;i<strlen(s)+1;i++){
        for(int j=0;j<strlen(p)+1;j++)
            flag[i][j]=false;
    }
    flag[0][0]=true;
    for(int i=0;i<strlen(p);i++){
        if(p[i]=='*'&&flag[0][i-1]){
            flag[0][i+1]=true;
        }
    }
    for(int i=0;i<strlen(s);i++){
        for(int j=0;j<strlen(p);j++){
            if(s[i]==p[j]||p[j]=='.'){
                flag[i+1][j+1]=flag[i][j];
            }
            if(p[j]=='*'){
                if(p[j-1]!=s[i]&&p[j-1]!='.'){
                    flag[i+1][j+1]=flag[i+1][j-1];
                }else{
                    flag[i+1][j+1]=(flag[i + 1][j] || flag[i][j + 1] );
                }
            }
        }
    }

    bool res=flag[strlen(s)][strlen(p)];
    free(flag);
    return res;

}