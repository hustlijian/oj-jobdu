题目：题目1154：Jungle Roads
-----------
时间限制：1 秒内存限制：32 兆特殊判题：否提交：237解决：162

题目描述：
-----------
![Jungle Roads](https://raw.github.com/hustlijian/oj-jobdu/master/1154/Jungle_Roads.jpg)

The Head Elder of the tropical island of Lagrishan has a problem. A burst of foreign aid money was spent on extra roads between villages some years ago. But the jungle overtakes roads relentlessly, so the large road network is too expensive to maintain. The Council of Elders must choose to stop maintaining some roads. The map above on the left shows all the roads in use now and the cost in aacms per month to maintain them. Of course there needs to be some way to get between all the villages on maintained roads, even if the route is not as short as before. The Chief Elder would like to tell the Council of Elders what would be the smallest amount they could spend in aacms per month to maintain roads that would connect all the villages. The villages are labeled A through I in the maps above. The map on the right shows the roads that could be maintained most cheaply, for 216 aacms per month. Your task is to write a program that will solve such problems.

输入：
-----------
 The input consists of one to 100 data sets, followed by a final line containing only 0. Each data set starts with a line containing only a number n, which is the number of villages, 1 < n < 27, and the villages are labeled with the first n letters of the alphabet, capitalized. Each data set is completed with n-1 lines that start with village labels in alphabetical order. There is no line for the last village. Each line for a village starts with the village label followed by a number, k, of roads from this village to villages with labels later in the alphabet. If k is greater than 0, the line continues with data for each of the k roads. The data for each road is the village label for the other end of the road followed by the monthly maintenance cost in aacms for the road. Maintenance costs will be positive integers less than 100. All data fields in the row are separated by single blanks. The road network will always allow travel between all the villages. The network will never have more than 75 roads. No village will have more than 15 roads going to other villages (before or after in the alphabet). In the sample input below, the first data set goes with the map above.

输出：
-----------
The output is one integer per line for each data set: the minimum cost in aacms per month to maintain a road system that connect all the villages. Caution: A brute force solution that examines every possible set of roads will not finish within the one minute time limit.

样例输入：
-----------
9  
A 2 B 12 I 25  
B 3 C 10 H 40 I 8  
C 2 D 18 G 55  
D 1 E 44  
E 2 F 60 G 38  
F 0  
G 1 H 35  
H 1 I 35  
3  
A 2 B 10 C 40  
B 1 C 20  
0

样例输出：
-----------
216  
30  

来源：
-----------
2010年北京大学计算机研究生机试真题

答疑：
-----------
解题遇到问题?分享解题心得?讨论本题请访问：http://t.jobdu.com/thread-7877-1-1.html