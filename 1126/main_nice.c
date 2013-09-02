#include<stdio.h>
int main()
{
    int n;
    int k;
    int t[80];
    int i;
    int j;
    int s[80];
    int lo;
    while(scanf("%d",&n)!=EOF)
    {
    for(i=0;i<n;i++)
    {
        scanf("%d",&k);
        for(j=0;j<k;j++)
            scanf("%d",&t[j]);
        lo=0;
        if(t[0]!=t[1])
            s[lo++]=0;
        for(j=1;j<k-1;j++)
            if((t[j]>t[j-1]&&t[j]>t[j+1])||(t[j]<t[j-1]&&t[j]<t[j+1]))
                s[lo++]=j;
        if(t[k-2]!=t[k-1])
            s[lo++]=k-1;
        for(j=0;j<lo-1;j++)
            printf("%d ",s[j]);
        printf("%d\n",s[j]);
    }
 
   
    }
 return 0;
}
/**************************************************************
    Problem: 1126
    User: szd1007
    Language: C
    Result: Accepted
    Time:10 ms
    Memory:912 kb
****************************************************************/
