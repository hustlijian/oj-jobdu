#include<stdio.h>
 
int cmp(const void *a, const void *b)
{
    return *(int *)a-*(int *)b;
}
 
int main(int argc, char *argv[])
{
    int data[1000];
    int n,i,k;
    while(~scanf("%d",&n))
    {
        for(i=0;i<n;i++)
            scanf("%d",&data[i]);
        scanf("%d",&k);
        qsort(data,n,sizeof(int),cmp);
        for(i=0;i<n && k!=0;i++)
        {
            if(data[i]!=data[i+1])
                k--;
        }
        printf("%d\n",data[i-1]);
    }       
}
 
/**************************************************************
    Problem: 1174
    User: mute
    Language: C
    Result: Accepted
    Time:0 ms
    Memory:912 kb
****************************************************************/
