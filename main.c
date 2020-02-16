//
// Created by keer on 2019/12/26.
//
#include <stdio.h>
#include <stdlib.h>
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
        case 2: {
            line_start(2);
            struct ListNode *l1, *l2;
            struct ListNode *node;
            struct ListNode *node1, *cp;
            struct ListNode *node2, *lp;
            l1 = malloc(sizeof(struct ListNode));
            l1->val = NULL;
            l1->next = NULL;
            cp = l1;
            l2 = malloc(sizeof(struct ListNode));
            l2->val = NULL;
            l2->next = NULL;
            lp = l2;
            for (int i = 0; i < 3; i++) {
                node1 = malloc(sizeof(struct ListNode));
                node1->val = i;
                node1->next = NULL;
                cp->next = node1;
                cp = cp->next;

                node2 = malloc(sizeof(struct ListNode));
                node2->val = i + 1;
                node2->next = NULL;
                lp->next = node2;
                lp = lp->next;
            }
            node = addTwoNumbers(l1->next, l2->next);
            printf("结果：");
            while (node != NULL) {
                printf("%d", node->val);
                node = node->next;
            }
            printf("\n");
            line_end();

        }
            break;
        case 3: {
            line_start(3);
            char *s = "dvdf";
            printf("结果=%d\n", lengthOfLongestSubstring(s));
            line_end();
        }
            break;
        case 4: {
            line_start(4);
            int a[2] = {1, 3};
            int b[1] = {2};


            printf("结果：=%lf\n", findMedianSortedArrays(a, 2, b, 1));
            line_end();
        }
            break;

        case 5: {
            line_start(5);
            char *s = "babad";
            printf("输入：%s\n", s);
            printf("结果：%s\n", longestPalindrome(s));
            char *a = "ccc";
            printf("输入：%s\n", a);
            printf("结果：%s\n", longestPalindrome(a));

        }
            break;
        case 6: {
            line_start(6);
            char *s = "LEETCODEISHIRING";
            printf("输入：%s,3\n", s);
            printf("结果：%s\n", convert(s, 3));
            printf("输入：%s,4\n", s);
            printf("结果：%s\n", convert(s, 4));
            line_end();
        }
            break;
        case 7: {
            line_start(7);
            int b = 1534236469;
            printf("输入：%d\n", b);
            printf("结果：%d\n", reverse(b));
            line_end();
        }
            break;
        case 8: {
            line_start(8);
            char *s = "   -42";
            printf("输入：%s\n", s);
            printf("结果：%d\n", myAtoi(s));
            line_end();
        }
            break;
        case 9: {
            line_start(9);
            int c = 121;
            printf("输入：%d\n", c);
            if (isPalindrome(c) == 0)
                printf("结果：不是回文数\n");
            else
                printf("结果：是回文数\n");
        }
            break;
        case 10: {
            line_start(10);
            char *c = "aabc";
            char *d="a*.c";
            printf("输入：%s, %s\n", c,d);

            printf("结果：%d\n",isMatch(c,d));
            line_end();
        }
            break;
        case 11:{
            line_start(11);
            int a[]={1,8,6,2,5,4,8,3,7};
            printf("输入：");
            for(int i=0;i<9;i++){
                printf("%d ",a[i]);
            }
            printf("\n");
            printf("结果：%d\n",maxArea(a,9));
        }
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
        case 709: {
            line_start(709);
            char *str = "HelloWorld";
            printf("结果：%s\n", toLowerCase(str));
//            char *str="HelloWorld";
//            int i=0;
//            printf("开始\n");
//            for(;str[i]!='\0';i++){
//                if(str[i]>='A'&&str[i]<='Z'){
//                    str[i]=(str[i])+32;
//                }
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
        case 1021: {
            line_start(1021);
            char *s = "(()())(())";
            printf("结果：%s\n", s);
            printf("结果：%s\n", removeOuterParentheses(s));
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
        case 1304: {
            line_start(1304);
            int *a;
            a = sumZero(5, a);
            int i = 0;
            for (; i < 5; i++) {
                printf("%d ", *a);
                a++;
            }
            printf("\n");
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