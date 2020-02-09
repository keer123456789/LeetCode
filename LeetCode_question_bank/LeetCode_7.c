//
// Created by keer on 2020/2/9.
//
#include <math.h>
#include <limits.h>
int reverse(int x){
    long sum=0;
    for(;x!=0;){
        int a=x%10;
        x=x/10;
        // if (sum > INT_MAX/10 || (sum == INT_MAX / 10 && a > 7)) return 0;
        // if (sum < INT_MIN/10 || (sum == INT_MIN / 10 && a < -8)) return 0;
        sum=sum*10+a;
    }
    if((int)sum!=sum){
        return 0;
    }
    return (int)sum;
}

//int reverse(int x){
//    int sum=0;
//    for(;x!=0;){
//        int a=x%10;
//        x=x/10;
//         if (sum > INT_MAX/10 || (sum == INT_MAX / 10 && a > 7)) return 0;
//         if (sum < INT_MIN/10 || (sum == INT_MIN / 10 && a < -8)) return 0;
//        sum=sum*10+a;
//    }
//
//    return (int)sum;
//}



