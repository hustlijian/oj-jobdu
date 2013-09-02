#include <stdio.h>
#include <string.h>
char num[1001];
C(int n){
	while(n>1){
		if(n%2)n=(n*3 + 1)/2;
		else n /= 2;
		if(n<1001) num[n]=1;
	}
}
main(){
	int i,j,n,a[500];
	while(scanf("%d", &n),n) {
		memset(num,0,1001);
		for (i=0;i<n;i++){
			scanf("%d",&a[i]);
			C(a[i]);
		}
		for(j=0;j<n;j++)if(!num[a[j]])break;
		for(i=n-1;i>j;i--)
			if(!num[a[i]])printf("%d ",a[i]);
		printf("%d\n", a[j]);
	}
}
/*
#include<stdio.h>
int main()
{
int n,m,a[1005],b[505];
int i,flag;
while(scanf("%d",&m)!=EOF && m)
{
for(i=0;i<m;i++)
scanf("%d",&b[i]);
for(i=0;i<1005;i++)
a[i]=0;
for(i=0;i<m;i++)
{
n=b[i];
while(n!=1)
{
if(n%2!=0)
n=3*n+1;
n/=2;
if(n<=1000)
a[n]=1;
}
}
flag=1;
for(i=m-1;i>=0;i--)
if(a[b[i]]==0)
{
if(flag)
{
printf("%d",b[i]);
flag=0;
}
else
{
printf(" %d",b[i]);
}
}
printf("\n");
}
return 0;
}
*/