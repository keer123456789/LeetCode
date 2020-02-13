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

//LeetCode_2
extern struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2);

//LeetCode_3
extern int lengthOfLongestSubstring(char *s);

//LeetCode_4
extern double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size);

//LeetCode_5
extern char * longestPalindrome(char * s);
//LeetCode_6
extern char * convert(char * s, int numRows);
//LeetCode_7
extern int reverse(int x);
//LeetCode_8
int myAtoi(char *str);

//LeetCode9
 int isPalindrome(int x);

//LeetCode_237
extern void deleteNode(struct ListNode *node);
extern void InitNodeList(struct sNode **HL);
extern void TraverseNodeList(struct ListNode *L);

//LeetCode_709
extern char * toLowerCase(char * str);
//LeetCode_771
extern int numJewelsInStones(char *J, char *S);

//LeetCode_1021
extern char * removeOuterParentheses(char * S);

//LeetCode_1108
extern char *defangIPaddr(char *address);

//LeetCode_1221
extern int balancedStringSplit(char * s);

//LeetCode_1281
extern int subtractProductAndSum(int n);

//LeetCode_1295
extern int findNumbers(int *nums, int numsSize);
extern int sumWei(int num);

//LeetCode_1304
extern int *  sumZero(int n, int* returnSize);

//LeetCode_1323
int maximum69Number (int num);




