#include <stdio.h>

//
// Created by keer on 2020/2/3.
//
#include <stdlib.h>

struct ListNode {
    int val;
    struct ListNode *next;
};

struct ListNode *addTwoNumbers(struct ListNode *l1, struct ListNode *l2) {
    struct ListNode *res;
    struct ListNode *lp;
    struct ListNode *cp;
    int flag = 0, x = 0, y = 0;

    res = lp;
    for (; l1 != NULL || l2 != NULL;) {
        cp = malloc(sizeof(struct ListNode));
        if (l1 == NULL) {
            x = 0;
        } else {
            x = l1->val;
        }
        if (l2 == NULL) {
            y = 0;
        } else {
            y = l2->val;
        }

        if ((x + y + flag) >= 10) {
            cp->val = x + y - 10 + flag;
            flag = 1;
        } else {
            cp->val = x + y + flag;
            flag = 0;
        }

        cp->next = NULL;

        lp->next = cp;
        lp = lp->next;

        if (l1 != NULL) {
            l1 = l1->next;
        }
        if (l2 != NULL) {
            l2 = l2->next;
        }
    }
    if (flag == 1) {
        cp = malloc(sizeof(struct ListNode));
        cp->val = 1;
        cp->next = NULL;
        lp->next = cp;
    }
    return res->next;
}

