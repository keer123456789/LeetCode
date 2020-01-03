//
// Created by keer on 2019/12/27.
//

/**
 * 给你一个有效的 IPv4 地址 address，返回这个 IP 地址的无效化版本。
 * 所谓无效化 IP 地址，其实就是用 "[.]" 代替了每个 "."。
 * 示例 1：
 *
 * 输入：address = "1.1.1.1"
 * 输出："1[.]1[.]1[.]1"
 *
 * 示例 2：
 * 输入：address = "255.100.50.0"
 * 输出："255[.]100[.]50[.]0"
 *
 * 提示：
 * 给出的 address 是一个有效的 IPv4 地址


 * @param address
 * @return
 */
#include <stdlib.h>
char * defangIPaddr(char * address){
    int len=0;
    for(int i=0;address[i]!='\0';i++){
        len++;
    }
    char *add=(char*)malloc(len + 6 + 1);
    int i=0,j=0;
    for(;i<len;i++){
        if(address[i]!='.'){
            add[j]=address[i];
            j++;

        }else{
            add[j]='[';
            j++;
            add[j]=address[i];
            j++;
            add[j]=']';
            j++;

        }
    }
    add[j]='\0';
    return add;
}