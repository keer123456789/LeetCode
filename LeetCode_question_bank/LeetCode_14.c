//
// Created by keer on 2020/2/18.
//
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *longestCommonPrefix(char **strs, int strsSize) {
    if (strsSize < 1) {
        return "";
    }
    int maxlong = 0;
    char *s = strs[0];
    for (int i = 1; i < strsSize; i++) {
        int j = 0;
        for (; s[j] != '\0' && strs[i][j] != '\0'; j++) {
            if (s[j] != strs[i][j]) {
                break;
            }

        }

        if (j == 0) {
            return "";
        }
        if (j > maxlong) {
            maxlong = j;
        }
    }
    char *res = (char *) malloc(sizeof(char) * maxlong);
    strncpy(res, s, maxlong);
    res[maxlong] = '\0';
    return res;
}