题目：题目1142：Biorhythms
-----------
时间限制：1 秒内存限制：32 兆特殊判题：否提交：167解决：109

题目描述：
-----------
Some people believe that there are three cycles in a person's life that start the day he or she is born. These three cycles are the physical, emotional, and intellectual cycles, and they have periods of lengths 23, 28, and 33 days, respectively. There is one peak in each period of a cycle. At the peak of a cycle, a person performs at his or her best in the corresponding field (physical, emotional or mental). For example, if it is the mental curve, thought processes will be sharper and concentration will be easier. 
Since the three cycles have different periods, the peaks of the three cycles generally occur at different times. We would like to determine when a triple peak occurs (the peaks of all three cycles occur in the same day) for any person. For each cycle, you will be given the number of days from the beginning of the current year at which one of its peaks (not necessarily the first) occurs. You will also be given a date expressed as the number of days from the beginning of the current year. You task is to determine the number of days from the given date to the next triple peak. The given date is not counted. For example, if the given date is 10 and the next triple peak occurs on day 12, the answer is 2, not 3. If a triple peak occurs on the given date, you should give the number of days to the next occurrence of a triple peak.

输入：
-----------
You will be given a number of cases. The input for each case consists of one line of four integers p, e, i, and d. The values p, e, and i are the number of days from the beginning of the current year at which the physical, emotional, and intellectual cycles peak, respectively. The value d is the given date and may be smaller than any of p, e, or i. All values are non-negative and at most 365, and you may assume that a triple peak will occur within 21252 days of the given date. The end of input is indicated by a line in which p = e = i = d = -1. 

输出：
-----------
For each test case, print the case number followed by a message indicating the number of days to the next triple peak, in the form:
    Case 1: the next triple peak occurs in 1234 days.
    Use the plural form "days'' even if the answer is 1. 

样例输入：
-----------
0 0 0 0  
0 0 0 100  
5 20 34 325  
4 5 6 7  
283 102 23 320  
203 301 203 40  
-1 -1 -1 -1

样例输出：
-----------
Case 1: the next triple peak occurs in 21252 days.  
Case 2: the next triple peak occurs in 21152 days.  
Case 3: the next triple peak occurs in 19575 days.  
Case 4: the next triple peak occurs in 16994 days.  
Case 5: the next triple peak occurs in 8910 days.  
Case 6: the next triple peak occurs in 10789 days.  

来源：
-----------
2009年北京大学计算机研究生机试真题

答疑：
-----------
解题遇到问题?分享解题心得?讨论本题请访问：http://t.jobdu.com/thread-7865-1-1.html

http://www.cnblogs.com/mlnzs/archive/2012/04/23/2467005.html

问题描述
     人自出生起就有体力，情感和智力三个生理周期，分别为23，28和33天。一个周期内有一天为峰值，在这一天，人在对应的方面（体力，情感或智力）表现最好。通常这三个周期的峰值不会是同一天。现在给出三个日期，分别对应于体力，情感，智力出现峰值的日期。然后再给出一个起始日期，要求从这一天开始，算出最少再过多少天后三个峰值同时出现。

问题分析
      首先我们要知道，任意两个峰值之间一定相距整数倍的周期。假设一年的第N天达到峰值，则下次达到峰值的时间为N+Tk(T是周期，k是任意正整数)。所以，三个峰值同时出现的那一天(S)应满足

      S = N1 + T1*k1 = N2 + T2*k2 = N3 + T3*k3

N1,N2,N3分别为为体力，情感，智力出现峰值的日期， T1，T2,T3分别为体力，情感，智力周期。 我们需要求出k1,k2,k3三个非负整数使上面的等式成立。

     想直接求出k1,k2,k3貌似很难，但是我们的目的是求出S， 可以考虑从结果逆推。根据上面的等式，S满足三个要求：除以T1余数为N1，除以T2余数为N2，除以T3余数为N3。这样我们就把问题转化为求一个最小数，该数除以T1余N1，除以T2余N2,除以T3余N3。这就是著名的中国剩余定理，我们的老祖宗在几千年前已经对这个问题想出了一个精妙的解法。依据此解法的算法，时间复杂度可达到O(1)。下面就介绍一下中国剩余定理。

中国剩余定理介绍
     在《孙子算经》中有这样一个问题：“今有物不知其数，三三数之剩二（除以3余2），五五数之剩三（除以5余3），七七数之剩二（除以7余2），问物几何？”这个问题称为“孙子问题”，该问题的一般解法国际上称为“中国剩余定理”。具体解法分三步：

找出三个数：从3和5的公倍数中找出被7除余1的最小数15，从3和7的公倍数中找出被5除余1 的最小数21，最后从5和7的公倍数中找出除3余1的最小数70。
用15乘以2（2为最终结果除以7的余数），用21乘以3（3为最终结果除以5的余数），同理，用70乘以2（2为最终结果除以3的余数），然后把三个乘积相加（15*2+21*3+70*2）得到和233。
用233除以3，5，7三个数的最小公倍数105，得到余数23，即233%105=23。这个余数23就是符合条件的最小数。
     就这么简单。我们在感叹神奇的同时不禁想知道古人是如何想到这个方法的，有什么基本的数学依据吗？

 
 
中国剩余定理分析
     我们将“孙子问题”拆分成几个简单的小问题，从零开始，试图揣测古人是如何推导出这个解法的。

     首先，我们假设n1是满足除以3余2的一个数，比如2，5，8等等，也就是满足3*k+2（k>=0）的一个任意数。同样，我们假设n2是满足除以5余3的一个数，n3是满足除以7余2的一个数。

     有了前面的假设，我们先从n1这个角度出发，已知n1满足除以3余2，能不能使得 n1+n2 的和仍然满足除以3余2？进而使得n1+n2+n3的和仍然满足除以3余2？

     这就牵涉到一个最基本数学定理，如果有a%b=c,则有(a+kb)%b=c(k为非零整数)，换句话说，如果一个除法运算的余数为c，那么被除数与k倍的除数相加（或相减）的和（差）再与除数相除，余数不变。这个是很好证明的。

     以此定理为依据，如果n2是3的倍数，n1+n2就依然满足除以3余2。同理，如果n3也是3的倍数，那么n1+n2+n3的和就满足除以3余2。这是从n1的角度考虑的，再从n2，n3的角度出发，我们可推导出以下三点：

为使n1+n2+n3的和满足除以3余2，n2和n3必须是3的倍数。
为使n1+n2+n3的和满足除以5余3，n1和n3必须是5的倍数。
为使n1+n2+n3的和满足除以7余2，n1和n2必须是7的倍数。
    因此，为使n1+n2+n3的和作为“孙子问题”的一个最终解，需满足：

n1除以3余2，且是5和7的公倍数。
n2除以5余3，且是3和7的公倍数。
n3除以7余2，且是3和5的公倍数。
    所以，孙子问题解法的本质是从5和7的公倍数中找一个除以3余2的数n1，从3和7的公倍数中找一个除以5余3的数n2，从3和5的公倍数中找一个除以7余2的数n3，再将三个数相加得到解。在求n1，n2，n3时又用了一个小技巧，以n1为例，并非从5和7的公倍数中直接找一个除以3余2的数，而是先找一个除以3余1的数，再乘以2。

    这里又有一个数学公式，如果a%b=c，那么（a*k）%b=a%b+a%b+…+a%b=c+c+…+c=kc（k>0）,也就是说，如果一个除法的余数为c，那么被除数的k倍与除数相除的余数为kc。展开式中已证明。

    最后，我们还要清楚一点，n1+n2+n3只是问题的一个解，并不是最小的解。如何得到最小解？我们只需要从中最大限度的减掉掉3，5，7的公倍数105即可。道理就是前面讲过的定理“如果a%b=c,则有(a-kb)%b=c”。所以（n1+n2+n3）%105就是最终的最小解。

 
总结
   经过分析发现，中国剩余定理的孙子解法并没有什么高深的技巧，就是以下两个基本数学定理的灵活运用：

如果 a%b=c , 则有 (a+kb)%b=c (k为非零整数)。
如果 a%b=c，那么 (a*k)%b=kc (k为大于零的整数)。
