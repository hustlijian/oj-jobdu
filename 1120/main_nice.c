#include <stdio.h>
#include <stdlib.h>
int mark[8],count,len;
char ans[8],s[8];
void huisu(int n)
{
    int i;
    if(len==n)  {puts(ans);return;}
    for(i=0;i<len;i++)
    {
        if(mark[i]==0)
        {
            mark[i]=1;
            ans[count++]=s[i];
            huisu(count);
            mark[i]=0;
            count--;
        }
    }
}
int main()
{
    int i;
    while(scanf("%s",s)!=EOF)
    {
        for(i=0;i<8;i++)    {mark[i]=0;ans[i]='\0';}
        len=strlen(s);
        count=0;
        huisu(0);
        printf("\n");
    }
    return 0;
}
 
/**************************************************************
    Problem: 1120
    User: lsy
    Language: C
    Result: Accepted
    Time:190 ms
    Memory:912 kb
****************************************************************/

