题目：题目1147：Jugs
-----------
时间限制：1 秒内存限制：32 兆特殊判题：是提交：135解决：110

题目描述：
-----------
 In the movie "Die Hard 3", Bruce Willis and Samuel L. Jackson were confronted with the following puzzle. They were given a 3-gallon jug and a 5-gallon jug and were asked to fill the 5-gallon jug with exactly 4 gallons. This problem generalizes that puzzle.
    You have two jugs, A and B, and an infinite supply of water. There are three types of actions that you can use: (1) you can fill a jug, (2) you can empty a jug, and (3) you can pour from one jug to the other. Pouring from one jug to the other stops when the first jug is empty or the second jug is full, whichever comes first. For example, if A has 5 gallons and B has 6 gallons and a capacity of 8, then pouring from A to B leaves B full and 3 gallons in A.
    A problem is given by a triple (Ca,Cb,N), where Ca and Cb are the capacities of the jugs A and B, respectively, and N is the goal. A solution is a sequence of steps that leaves exactly N gallons in jug B. The possible steps are  
    fill A   
    fill B   
    empty A   
    empty B   
    pour A B   
    pour B A   
    success  
    where "pour A B" means "pour the contents of jug A into jug B", and "success" means that the goal has been accomplished.
    You may assume that the input you are given does have a solution.

输入：
-----------
Input to your program consists of a series of input lines each defining one puzzle. Input for each puzzle is a single line of three positive integers: Ca, Cb, and N. Ca and Cb are the capacities of jugs A and B, and N is the goal. You can assume 0 < Ca <= Cb and N <= Cb <=1000 and that A and B are relatively prime to one another.

输出：
-----------
Output from your program will consist of a series of instructions from the list of the potential output lines which will result in either of the jugs containing exactly N gallons of water. The last line of output for each puzzle should be the line "success". Output lines start in column 1 and there should be no empty lines nor any trailing spaces. 

样例输入：
-----------
3 5 4  
5 7 3  

样例输出：
-----------
fill B  
pour B A  
empty A  
pour B A  
fill B  
pour B A  
success  
fill A  
pour A B  
fill A  
pour A B  
empty B  
pour A B  
success  

来源：
-----------
2009年北京大学计算机研究生机试真题

答疑：
-----------
解题遇到问题?分享解题心得?讨论本题请访问：http://t.jobdu.com/thread-7870-1-1.html
