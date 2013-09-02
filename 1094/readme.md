#题目1072：有多少不同的面值组合？

时间限制：1 秒内存限制：32 兆特殊判题：否提交：764解决：374

#题目描述：
Finding all occurrences of a pattern in a text is a problem that arises frequently in text-editing programs. 
    Typically,the text is a document being edited,and the pattern searched for is a particular word supplied by the user.  
    We assume that the text is an array T[1..n] of length n and that the pattern is an array P[1..m] of length m<=n.We further assume that the elements of P and  T are all alphabets(∑={a,b...,z}).The character arrays P and T are often called strings of characters.  
    We say that pattern P occurs with shift s in the text T if 0<=s<=n and T[s+1..s+m] = P[1..m](that is if T[s+j]=P[j],for 1<=j<=m).  
    If P occurs with shift s in T,then we call s a valid shift;otherwise,we calls a invalid shift. 
    Your task is to calculate the number of vald shifts for the given text T and p attern P.
#输入：
   For each case, there are two strings T and P on a line,separated by a single space.You may assume both the length of T and P will not exceed 10^6. 
#输出：
 You should output a number on a separate line,which indicates the number of valid shifts for the given text T and pattern P.
#样例输入：
abababab abab
#样例输出：
3
#来源：
2006年上海交通大学计算机研究生机试真题
#答疑：
解题遇到问题?分享解题心得?讨论本题请访问：http://t.jobdu.com/thread-7817-1-1.html
