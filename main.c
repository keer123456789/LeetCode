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
    printf("������Ҫ���Ե�LeetCode��Ŀ�ţ�");
    scanf("%d", &a);
    switch (a) {
        /**
         * ����LeetCode_1�еĺ���
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
             * ����LeetCode_3�еĺ���
             */
        case 3: {
            line_start(3);
            char *s = "abcbefg";
            printf("���=%d\n", lengthOfLongestSubstring(s));
            line_end();
        }
            break;
        case 237: {
            line_start(237);
            struct ListNode *p;
            struct ListNode q,k;
            InitNodeList(&p);
            p->next=&q;
            q.val=3;
            q.next=&k;
            k.next=NULL;
            k.val=7;

            TraverseNodeList(p);
            deleteNode(&q);
            TraverseNodeList(p);
            line_end();

        }
            break;
        /**
         * ����LeetCode_771�еĺ���
         */
        case 771: {
            line_start(771);
            char *J = "abB";
            char *S = "aaaBBbbAAhhshshs";
            printf("���=%d\n", numJewelsInStones(J, S));
            line_end();
        }
            break;

        case 1108: {
            line_start(1108);
            char *J = "1.1.1.1";
            char *IP = defangIPaddr(J);
            printf("���=%s\n", IP);
            line_end();
        }
            break;

        case 1281: {
            line_start(1281);
            int a = 12042;
            printf("���=%d\n", subtractProductAndSum(a));
            line_end();
        }
            break;
        case 1295: {
            line_start(1295);
            int nums[] = {1259, 45, 2, 33, 664};
            printf("���=%d\n", findNumbers(nums, 5));
            line_end();
        }
            break;
        case 1323:{
            line_start(1323);
            printf("���룺696\n");
            printf("���=%d\n", maximum69Number(696));
            line_end();
        }
    }


}