#include<stdio.h>
 
int main()
{
  int a,b;
  while(scanf("%d%d",&a,&b)!=EOF && (a!=0 && b!=0))
    {
      int ans=1;
      while(b!=0)
    {
      if(b%2!=0)
        { ans*=a;ans%=1000;}
      a*=a;
      a%=1000;
      b/=2;
}
      printf("%d\n",ans);
}
  return 0;
}
/**************************************************************
    Problem: 1441
    User: hbbaiyu
    Language: C
    Result: Accepted
    Time:0 ms
    Memory:912 kb
****************************************************************/
