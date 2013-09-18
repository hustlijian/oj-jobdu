#include<stdio.h>
int gcd(int a,int b)
{
return b!=0?gcd(b,a%b):a;
}
int main()
{
int a,b;
while(scanf("%d%d",&a,&b)!=EOF)
{
printf("%d\n",a*b/gcd(a,b));
}
return 0;
}
/**************************************************************
    Problem: 1438
    User: node32number1
    Language: C
    Result: Accepted
    Time:0 ms
    Memory:912 kb
****************************************************************/
