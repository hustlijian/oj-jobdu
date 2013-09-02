//author: LA1992
#include<stdio.h>
int mons[11]={31,59,90,120,151,181,212,243,273,304,334};
int check(int a)
{
    int y,m,d,days,sum;
    y=a/10000;
    d=a%100;
    m=(a/100)%100;
    if((y%4==0&&y%100!=0)||(y%400==0))
    {
            if(m>2) days=mons[m-2]+1+d;
            else if(m==1) days=d;
            else days=mons[0]+d;
    }
    else 
    {
            if(m==1) days=d;
            else days=mons[m-2]+d;
    }
    sum=(y-1)*365+(y-1)/4-(y-1)/100+(y-1)/400+days;
    return sum;
}
int main()
{
    int a,b;
    while(scanf("%d%d",&a,&b)!=EOF)
    {
            printf("%d\n",check(b)-check(a)+1);
    }
    return 0;
}
