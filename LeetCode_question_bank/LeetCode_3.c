//
// Created by keer on 2019/12/27.
//

/**
 * 给定一个字符串，请你找出其中不含有重复字符的 最长子串 的长度。
 *
 * 示例 1:
 * 输入: "abcabcbb"
 * 输出: 3
 * 解释: 因为无重复字符的最长子串是 "abc"，所以其长度为 3。
 *
 *示例 2:
 * 输入: "bbbbb"
 * 输出: 1
 * 解释: 因为无重复字符的最长子串是 "b"，所以其长度为 1。
 * 示例 3:
 * 输入: "pwwkew"
 * 输出: 3
 * 解释: 因为无重复字符的最长子串是?"wke"，所以其长度为 3。
 *
 *
 * 请注意，你的答案必须是 子串 的长度，"pwke"?是一个子序列，不是子串。
 */

int lengthOfLongestSubstring(char * s){
    int maxLong=1;

    char *p=s;
    char * flag=s;
    if(*s=='\0')
        return 0;
    s++;
    for(;*s!='\0';){
        int sum=1;
        for(;p!=s;){
            if(*p!=*s){
                sum++;
                p++;
            }else{
                sum=1;
                p++;
                flag=p;
                break;
            }
        }
        if(sum>maxLong){
            maxLong=sum;
        }

        p=flag;
        s++;
    }

    return maxLong;
}