#include <stdio.h>
#define P printf
int main()
{
	int n,*p,N[4]={6,28,496,8128};
	while(~scanf("%d",&n)){
	  p=N;
		if(n>=*p)P("%d",*p++);
		while(n>=*p)P(" %d",*p++);
		P("\n");
	}
}