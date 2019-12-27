//
// Created by keer on 2019/12/27.
//

/**
 * 给定一个整数数组 nums 和一个目标值 target，请你在该数组中找出和为目标值的那 两个 整数，并返回他们的数组下标。
 * 你可以假设每种输入只会对应一个答案。但是，你不能重复利用这个数组中同样的元素。
 *
 *
 * 实例：
 * 给定 nums = [2, 7, 11, 15], target = 9
 * 因为 nums[0] + nums[1] = 2 + 7 = 9
 * 所以返回 [0, 1]
 */
#include <stdio.h>
int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    int i=0,j=0;
    int a=0,b=0;
    int *num=nums;
    for(i=0;i<numsSize-1;i++){
        a = *num;
        nums=num;
        nums++;
        for(j=i+1;j<numsSize;j++) {
            b = *nums;
            if (a + b == target) {
                *returnSize = i;
                returnSize ++;
                *returnSize = j;
            }
            nums++;
        }
        num++;
    }
    return returnSize;
}
