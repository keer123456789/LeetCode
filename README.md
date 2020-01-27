# LeetCode 题库

此代码库是刷LeetCode题，准备机考用！
题源：https://leetcode-cn.com/problemset/all/
## 使用方法
运行`main.c`中的mian函数

## 题目    
### 第 1题     
给定一个整数数组 nums 和一个目标值 target，请你在该数组中找出和为目标值的那 两个整数，并返回他们的数组下标。你可以假设每种输入只会对应一个答案。但是，你不能重复利用这个数组中同样的元素。   
```
 实例：   
 给定 nums = [2, 7, 11, 15], target = 9    
 因为 nums[0] + nums[1] = 2 + 7 = 9    
 所以返回 [0, 1] 
``` 
 
 ### 第3题     
   
  给定一个字符串，请你找出其中不含有重复字符的 最长子串 的长度。   
```      
  示例 1:   
  输入: "abcabcbb"   
  输出: 3   
  解释: 因为无重复字符的最长子串是 "abc"，所以其长度为 3。     
      
  示例 2:    
  输入: "bbbbb"     
  输出: 1     
  解释: 因为无重复字符的最长子串是 "b"，所以其长度为 1。   
    
  示例 3:    
  输入: "pwwkew"      
  输出: 3     
  解释: 因为无重复字符的最长子串是?"wke"，所以其长度为 3。   
```   
     
*  请注意，你的答案必须是 子串 的长度，"pwke"?是一个子序列，不是子串。*     

### 第237题
请编写一个函数，使其可以删除某个链表中给定的（非末尾）节点，你将只被给定要求被删除的节点。
```
示例 1:

输入: head = [4,5,1,9], node = 5
输出: [4,1,9]
解释: 给定你链表中值为 5 的第二个节点，那么在调用了你的函数之后，该链表应变为 4 -> 1 -> 9.
示例 2:
输入: head = [4,5,1,9], node = 1
输出: [4,5,9]
解释: 给定你链表中值为 1 的第三个节点，那么在调用了你的函数之后，该链表应变为 4 -> 5 -> 9.
 

说明:

链表至少包含两个节点。
链表中所有节点的值都是唯一的。
给定的节点为非末尾节点并且一定是链表中的一个有效节点。
不要从你的函数中返回任何结果。
```
### 第771题      
给定字符串J 代表石头中宝石的类型，和字符串 S代表你拥有的石头。 S 中每个字符代表了一种你拥有的石头的类型，你想知道你拥有的石头中有多少是宝石。J 中的字母不重复，J 和 S中的所有字符都是字母。字母区分大小写，因此"a"和"A"是不同类型的石头。    
*注意:*
*S 和 J 最多含有50个字母。*   
*J 中的字符不重复。*     

```
示例 1:    

输入: J = "aA", S = "aAAbbbb"
输出: 3
示例 2:

输入: J = "z", S = "ZZ"
输出: 0

```
###  第1108题
给你一个有效的 IPv4 地址 address，返回这个 IP 地址的无效化版本。     
所谓无效化 IP 地址，其实就是用 "[.]" 代替了每个 "."。

 
```
示例 1：

输入：address = "1.1.1.1"
输出："1[.]1[.]1[.]1"
示例 2：

输入：address = "255.100.50.0"
输出："255[.]100[.]50[.]0"
```

*提示：给出的 address 是一个有效的 IPv4 地址*     

### 第1221题   
在一个「平衡字符串」中，'L' 和 'R' 字符的数量是相同的。
给出一个平衡字符串 s，请你将它分割成尽可能多的平衡字符串。
返回可以通过分割得到的平衡字符串的最大数量。

```
示例 1：

输入：s = "RLRRLLRLRL"
输出：4
解释：s 可以分割为 "RL", "RRLL", "RL", "RL", 每个子字符串中都包含相同数量的 'L' 和 'R'。
示例 2：

输入：s = "RLLLLRRRLR"
输出：3
解释：s 可以分割为 "RL", "LLLRRR", "LR", 每个子字符串中都包含相同数量的 'L' 和 'R'。
示例 3：

输入：s = "LLLLRRRR"
输出：1
解释：s 只能保持原样 "LLLLRRRR".

```
###  第1281题   
给你一个整数 n，请你帮忙计算并返回该整数「各位数字之积」与「各位数字之和」的差。    
*提示：`1 <= n <= 10^5`*
```
示例 1：

输入：n = 234
输出：15 
解释：
各位数之积 = 2 * 3 * 4 = 24 
各位数之和 = 2 + 3 + 4 = 9 
结果 = 24 - 9 = 15


示例 2：

输入：n = 4421
输出：21
解释： 
各位数之积 = 4 * 4 * 2 * 1 = 32 
各位数之和 = 4 + 4 + 2 + 1 = 11 
结果 = 32 - 11 = 21
```




###  第 1295题      
*注意：本题没有按照LeetCode官网给出的限制条件所做，而是删除了限制条件*       

```
  给你一个整数数组 nums，请你返回其中位数为 偶数 的数字的个数。
  
  示例 1：     
  输入：nums = [12,345,2,6,7896]     
  输出：2   
  解释：      
  12 是 2 位数字（位数为偶数）      
  345 是 3 位数字（位数为奇数）         
  2 是 1 位数字（位数为奇数）     
  6 是 1 位数字 位数为奇数）      
  7896 是 4 位数字（位数为偶数）       
  因此只有 12 和 7896 是位数为偶数的数字      
 
  示例 2：       
  输入：nums = [555,901,482,1771]       
  输出：1     
  解释：   
  只有 1771 是位数为偶数的数字。 
```
###第 1323题 
给你一个仅由数字 6 和 9 组成的正整数 num。
你最多只能翻转一位数字，将 6 变成 9，或者把 9 变成 6 。
请返回你可以得到的最大数字。
```
示例 1：

输入：num = 9669
输出：9969
解释：
改变第一位数字可以得到 6669 。
改变第二位数字可以得到 9969 。
改变第三位数字可以得到 9699 。
改变第四位数字可以得到 9666 。
其中最大的数字是 9969 。
示例 2：

输入：num = 9996
输出：9999
解释：将最后一位从 6 变到 9，其结果 9999 是最大的数。
示例 3：

输入：num = 9999
输出：9999
解释：无需改变就已经是最大的数字了。
 

提示：

1 <= num <= 10^4
num 每一位上的数字都是 6 或者 9 。
```
  
  
  
     