//
// Created by keer on 2019/12/27.
//

#ifndef LEETCODE_LEETCODE_QUESTION_BANK_H
#define LEETCODE_LEETCODE_QUESTION_BANK_H
struct ListNode {
    int val;
    struct ListNode *next;
};
#endif //LEETCODE_LEETCODE_QUESTION_BANK_H

//LeetCode_1
extern int *twoSum(int *nums, int numsSize, int target, int *returnSize);

//LeetCode_3
extern int lengthOfLongestSubstring(char *s);

//LeetCode_237
extern void deleteNode(struct ListNode *node);
extern void InitNodeList(struct sNode **HL);
extern void TraverseNodeList(struct ListNode *L);

//LeetCode_771
extern int numJewelsInStones(char *J, char *S);

//LeetCode_1108
extern char *defangIPaddr(char *address);

//LeetCode_1281
extern int subtractProductAndSum(int n);

//LeetCode_1295
extern int findNumbers(int *nums, int numsSize);
extern int sumWei(int num);

//LeetCode_1323
int maximum69Number (int num);




