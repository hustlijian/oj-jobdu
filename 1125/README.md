题目：题目1125：大整数的因子
-----------
时间限制：1 秒内存限制：32 兆特殊判题：否提交：600解决：288

题目描述：
-----------
已知正整数k满足2<=k<=9，现给出长度最大为30位的十进制非负整数c，求所有能整除c的k.

输入：
-----------
若干个非负整数c，c的位数<=30
每行一个c，当c=-1时中止
（不要对-1进行计算！）

输出：
-----------
每一个c的结果占一行
1) 若存在满足 c%k == 0 的k，输出所有这样的k，中间用空格隔开，最后一个k后面没有空格。
2) 若没有这样的k则输出"none"

样例输入：
-----------
30  
72  
13  
-1

样例输出：
-----------
2 3 5 6  
2 3 4 6 8 9  
none

来源：
-----------
2008年北京大学方正实验室计算机研究生机试真题

答疑：
-----------
解题遇到问题?分享解题心得?讨论本题请访问：http://t.jobdu.com/thread-7848-1-1.html
