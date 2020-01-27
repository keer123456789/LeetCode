//
// Created by keer on 2020/1/27.
//
int balancedStringSplit(char *s) {
    int sum = 0, sign = 0;
    for (; *s != '\0';) {
        if (*s == 'R') {
            sign++;
        } else {
            sign--;
        }
        if (sign == 0) {
            sum++;
        }
        s++;
    }
    return sum;
}

