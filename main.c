//
// Created by keer on 2019/12/26.
//
#include <stdio.h>
#include "LeetCode_question_bank.h"


void line_start(int a) {
    printf("********************LeetCode_%d********************\n", a);
}

void line_end() {
    printf("**************************************************\n");
}

void main() {


    int a;
    printf("请输入要调试的LeetCode题目号：");
    scanf("%d", &a);
    switch (a) {
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
            /**
             * 调用LeetCode_3中的函数
             */
        case 3: {
            line_start(3);
            char *s = "abcbefg";
            printf("结果=%d\n", lengthOfLongestSubstring(s));
            line_end();
        }
            break;
        case 237: {
            line_start(237);
            struct ListNode *p;
            struct ListNode q, k;
            InitNodeList(&p);
            p->next = &q;
            q.val = 3;
            q.next = &k;
            k.next = NULL;
            k.val = 7;

            TraverseNodeList(p);
            deleteNode(&q);
            TraverseNodeList(p);
            line_end();

        }
            break;
        case 709:{
            line_start(709);
            char *str="HelloWorld";
            printf("结果：%s\n",toLowerCase(str));
//            char *str="HelloWorld";
//            char c;
//            printf("开始");
//            for(;*str!='\0';){
//                if(*str>='A'&&*str<='Z'){
//                    c=*str+32;
//
//                    *str=c;
//                }
//                str++;
//            }
//            printf("结果：%s\n",str);
            line_end();
        }
            break;
            /**
             * 调用LeetCode_771中的函数
             */
        case 771: {
            line_start(771);
            char *J = "abB";
            char *S = "aaaBBbbAAhhshshs";
            printf("结果=%d\n", numJewelsInStones(J, S));
            line_end();
        }
            break;
        case 1021:{
            line_start(1021);
            char *s="(()())(())";
            printf("结果：%s\n",s);
            printf("结果：%s\n",removeOuterParentheses(s));
            line_end();
        }
            break;
        case 1108: {
            line_start(1108);
            char *J = "1.1.1.1";
            char *IP = defangIPaddr(J);
            printf("结果=%s\n", IP);
            line_end();
        }
            break;

        case 1221: {
            line_start(1221);
            char s[] = "RRRLLLRLRLRLRRLL";
            printf("结果：%d\n", balancedStringSplit(&s));
            line_end();
        }
            break;
        case 1281: {
            line_start(1281);
            int a = 12042;
            printf("结果=%d\n", subtractProductAndSum(a));
            line_end();
        }
            break;
        case 1295: {
            line_start(1295);
            int nums[] = {1259, 45, 2, 33, 664};
            printf("结果=%d\n", findNumbers(nums, 5));
            line_end();
        }
            break;
        case 1323: {
            line_start(1323);
            printf("输入：696\n");
            printf("结果=%d\n", maximum69Number(696));
            line_end();
        }
    }


}