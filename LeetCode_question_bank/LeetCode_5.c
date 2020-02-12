//
// Created by keer on 2020/2/7.
//
#include <stdlib.h>
#include <string.h>

#define FLAG 3

/**
 * 暴力检索
 * @param s
 * @return
 */
char *longestPalindrome1(char *s) {
    int maxlong, flag, num, length;
    int checkPalindrome(char *s, int start, int end);
    length = strlen(s);
    if (length < 2) {
        return s;
    }
    maxlong = flag = 0;
    for (int i = 0; i < length; i++) {
        num = 1;
        for (int j = i + 1; j < length; j++) {
            if (checkPalindrome(s, i, j) == 1) {
                if (num > maxlong) {
                    maxlong = num;
                    flag = i;
                }
            }
            num++;
        }
    }
    char *a = (char *) malloc(sizeof(char) * (maxlong + 2));
    strncpy(a, s + flag, maxlong + 2);
    a[maxlong + 2] = '\0';

    return a;
}

/**
 * 判断字符串是否为回文
 * @param s
 * @param start 起始位置
 * @param end 结束位置
 * @return 是回文返回1，不是返回0
 */
int checkPalindrome(char *s, int start, int end) {
    for (; start <= end;) {
        if (s[start] != s[end]) {
            return 0;
        }
        start++;
        end--;
    }
    return 1;
}

/**
 * 动态规划
 * @param s
 * @return
 */
char *longestPalindrome2(char *s) {
    int length = strlen(s);
    if (length < 2) {
        return s;
    }

    int maxlong = 1;
    int start = 0;
    int **a = (int **) malloc(sizeof(int *) * length);
    for (int i = 0; i < length; i++) {
        a[i] = (int *) malloc(sizeof(int) * length);
    }
    for (int i = 0; i < length; i++) {
        a[i][i] = 1;
    }

    for (int j = 1; j < length; j++) {
        for (int i = 0; i < j; i++) {
            if (s[i] == s[j]) {
                if (j - i < 3) {
                    a[i][j] = 1;
                } else {
                    a[i][j] = a[i + 1][j - 1];
                }
            } else {
                a[i][j] = 0;
            }

            if (a[i][j] == 1) {
                int curLen = j - i + 1;
                if (curLen > maxlong) {
                    maxlong = curLen;
                    start = i;
                }
            }
        }
    }
    char *b = (char *) malloc(sizeof(char) * (maxlong));
    strncpy(b, s + start, maxlong);
    b[maxlong] = '\0';
    return b;

}

/**
 * 中心扩散算法
 * @param s
 * @return
 */
char *longestPalindrome3(char *s) {
    int len = strlen(s);
    char *centerSpread(char *s, int left, int right);
    if (len < 2) {
        return s;
    }
    int left, right, maxlong = 1;
    char *res;
    for (int i = 0; i < len; i++) {
        char *odd = centerSpread(s, i, i);//偶数
        char *even = centerSpread(s, i, i + 1);//奇数
        char *max;
        if (strlen(odd) > strlen(even)) {
            max = odd;
        } else {
            max = even;
        }

        if (strlen(max) > maxlong) {
            maxlong = strlen(max);
            res = max;
        }
    }
    return res;
}

/**
 * 找出回文
 * @param s
 * @param left
 * @param right
 * @return
 */
char *centerSpread(char *s, int left, int right) {
    int len = strlen(s);
    while (left >= 0 && right < len) {
        if (s[left] == s[right]) {
            left--;
            right++;
        } else {
            break;
        }
    }
    char *a = (char *) malloc(sizeof(char) * (right - (left + 1)));
    strncpy(a, s + left + 1, right - (left + 1));
    a[right - (left + 1)] = '\0';
    return a;
}

char *longestPalindrome(char *s) {
    if (FLAG == 1) {
        return longestPalindrome1(s);
    }
    if (FLAG == 2) {
        return longestPalindrome2(s);
    }
    if (FLAG == 3) {
        return longestPalindrome3(s);
    }
}