//
// Created by keer on 2019/12/26.
//
#include <stdio.h>
#include "LeetCode_question_bank.h"



void line_start(int a){
    printf("********************LeetCode_%d********************\n",a);
}
void line_end(){
    printf("**************************************************\n");
}

void main(){


    int a;
    printf("请输入要调试的LeetCode题目号：");
    scanf("%d",&a);
    switch(a) {
        /**
         * 调用LeetCode_1中的函数
         */
        case 1: {
            line_start(1);
            int nums[] = {2, 11, 15, 7};
            int sum1[] = {0, 0};
            int *sum = sum1;
            sum = twoSum(nums, 4, 9, sum);
            printf("%d,,,%d\n", sum1[0], sum1[1]);
            line_end();
        }
            break;

        case 3: {
            line_start(3);
            char *s = "abcbefg";
            printf("结果=%d\n", lengthOfLongestSubstring(s));
            line_end();
        }
            break;

        case 771:{
            line_start(771);
            char *J="abB";
            char *S="aaaBBbbAAhhshshs";
            printf("结果=%d\n",numJewelsInStones(J,S));
            line_end();
        }
            break;
        case 1295:{
            line_start(1295);
            int nums[]={1259,45,2,33,664};
            printf("结果=%d\n",findNumbers(nums,5));
            line_end();
        }
    }


}