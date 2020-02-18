//
// Created by keer on 2020/2/17.
//
#include <string.h>

#define switch 1

int romanToInt1(char *s) {
    int flag[26] = {0};
    flag['I' - 'A'] = 1;
    flag['V' - 'A'] = 5;
    flag['X' - 'A'] = 10;
    flag['L' - 'A'] = 50;
    flag['C' - 'A'] = 100;
    flag['D' - 'A'] = 500;
    flag['M' - 'A'] = 1000;
    int previous = 0, sum = 0;
    for (int i = 0; i < strlen(s); i++) {
        if (previous < flag[s[i] - 'A']) {
            sum = sum - previous * 2;
        }
        previous = flag[s[i] - 'A'];
        sum = sum + flag[s[i] - 'A'];
    }
    return sum;
}

int romanToInt2(char *s) {
    int flag[26] = {0};
    flag['I' - 'A'] = 1;
    flag['V' - 'A'] = 5;
    flag['X' - 'A'] = 10;
    flag['L' - 'A'] = 50;
    flag['C' - 'A'] = 100;
    flag['D' - 'A'] = 500;
    flag['M' - 'A'] = 1000;
    int previous = 0, sum = 0;
    int i = 0;
    for (; i < strlen(s) - 1; i++) {
        if (flag[s[i] - 'A'] >= flag[s[i + 1] - 'A']) {
            sum = sum + flag[s[i] - 'A'];
        } else {
            sum = sum - flag[s[i] - 'A'];
        }
    }
    sum = sum + flag[s[i] - 'A'];
    return sum;
}

int romanToInt(char *s) {
    if (switch == 1) {
        return romanToInt1(s);
    } else {
        return romanToInt2(s);
    }
}