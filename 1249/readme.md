题目：题目1249：次小生成树
-----------
时间限制：1 秒内存限制：32 兆特殊判题：否提交：16解决：10

题目描述：
-----------
最小生成树大家都已经很了解，次小生成树就是图中构成的树的权值和第二小的树，此值也可能等于最小生成树的权值和，你的任务就是设计一个算法计算图的最小生成树。

输入：
-----------
存在多组数据，第一行一个正整数t，表示有t组数据。
每组数据第一行有两个整数n和m（2<=n<=100），之后m行，每行三个正整数s，e，w，表示s到e的双向路的权值为w。

输出：
-----------
输出次小生成树的值，如果不存在输出-1。

样例输入：
-----------
2
3 3
1 2 1
2 3 2
3 1 3
4 4
1 2 2
2 3 2
3 4 2
4 1 2

样例输出：
-----------
4
6

答疑：
-----------
解题遇到问题?分享解题心得?讨论本题请访问：http://t.jobdu.com/thread-7972-1-1.html
