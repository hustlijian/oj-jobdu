题目：题目1145：Candy Sharing Game
-----------
时间限制：1 秒内存限制：32 兆特殊判题：否提交：140解决：107

题目描述：
-----------
 A number of students sit in a circle facing their teacher in the center. Each student initially has an even number of pieces of candy. When the teacher blows a whistle, each student simultaneously gives half of his or her candy to the neighbor on the right. Any student, who ends up with an odd number of pieces of candy, is given another piece by the teacher. The game ends when all students have the same number of pieces of candy.
    Write a program which determines the number of times the teacher blows the whistle and the final number of pieces of candy for each student from the amount of candy each child starts with. 

输入：
-----------
The input may describe more than one game. For each game, the input begins with the number N of students,followed by N (even) candy counts for the children counter-clockwise around the circle. The input ends with a student count of 0. Each input number is on a line by itself. 

输出：
-----------
 For each game, output the number of rounds of the game followed by the amount of candy each child ends up with,both on one line. 

样例输入：
-----------
6  
36  
2  
2  
2  
2   
2  
11  
22  
20  
18   
16  
14  
12  
10  
8  
6  
4  
2  
4  
2  
4  
6   
8  
0 

样例输出：
-----------
15 14  
17 22  
4 8  

提示：
-----------
The game ends in a finite number of steps because:
1. The maximum candy count can never increase.
2. The minimum candy count can never decrease.
3. No one with more than the minimum amount will ever decrease to the minimum.
4. If the maximum and minimum candy count are not the same, at least one student with the minimum amount must have their count increase 

来源：
-----------
2009年北京大学计算机研究生机试真题

答疑：
-----------
解题遇到问题?分享解题心得?讨论本题请访问：http://t.jobdu.com/thread-7868-1-1.html
