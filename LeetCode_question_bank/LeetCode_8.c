//
// Created by keer on 2020/2/13.
//
#include <limits.h>


int myAtoi(char *str) {
    int flag = 1;
    long sum = 0;
    for (; *str == 32; str++);
    switch (*str) {
        case 43: {
            str++;
        }
            break;
        case 45: {
            flag = -1;
            str++;
        }
            break;
    }
    if (*str < 48 || *str > 57) {
        return 0;
    }
    for (; *str >= 48 && *str <= 57; str++) {
        sum = sum * 10 + (*str - 48);

        if ((int) sum != sum) {
            if (flag < 0) {
                return INT_MIN;
            } else {
                return INT_MAX;
            }
        }
    }
    sum = sum * flag;
    return sum;

}