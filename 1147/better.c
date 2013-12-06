#include <stdio.h>
#include <stdlib.h>
int main()
{int a,b,n,sum;
  while(scanf("%d%d%d",&a,&b,&n)!=EOF){
    sum=0;
    while(sum!=n){
      if(sum<b){
        printf("fill A\npour A B\n");
        sum+=a;
      } else if(sum>b){
        printf("empty B\npour A B\n");
        sum-=b;
      }
    } 
    printf("success\n");
  }
  return 0;
}

/**************************************************************
    Problem: 1147
    User: fanqiejiang
    Language: C
    Result: Accepted
    Time:0 ms
    Memory:912 kb
****************************************************************/
