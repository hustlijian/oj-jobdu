#include <stdio.h>
 
int qsort_1(int a[],int low,int high){
    int p;
    p=a[low];
    while(low<high){     
        while(low<high&&a[high]>=p)
            --high;
        a[low]=a[high];
        while(low<high&&a[low]<=p)
            ++low;
        a[high]=a[low];
    }
    a[low]=p;
    return low;
}
 
int qsort(int a[],int low,int high){
    int pr;
    pr=qsort_1(a,low,high);
    if(low==pr)
        return 0;
    qsort(a,low,pr-1);
    qsort(a,pr+1,high);
}
 
 
 
int main(){
    int a[10000],n,i,j,flag,t;
    while(scanf("%d",&n)!=EOF){
        if(n==0)
            break;
        for(i=0;i<n;i++)
            scanf("%d",&a[i]);
        qsort(a,0,n-1);
        if(n%2==0)
            printf("%d\n",(a[n/2-1]+a[n/2])/2);
        else
            printf("%d\n",a[n/2]);
    }
    return 0;
}
 
/**************************************************************
    Problem: 1157
    User: haruka
    Language: C
    Result: Accepted
    Time:10 ms
    Memory:908 kb
****************************************************************/
