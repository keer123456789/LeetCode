//
// Created by keer on 2020/1/27.
//
#include <stdlib.h>
#include <stdio.h>
struct ListNode {
    int val;
    struct ListNode *next;
};
void deleteNode(struct ListNode* node) {
    node->val=node->next->val;
    node->next=node->next->next;
}

void InitNodeList(struct sNode **HL) {
    *HL = NULL;
}


void TraverseNodeList(struct ListNode *L) {
    while (L != NULL) {
        printf("%5d ", L->val);
        L = L->next;
    }

    printf("\n");
}