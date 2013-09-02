#include <stdio.h>

int count(int a, int k)
{
	int i = 1;
	while(k--) i*=10;
	return a%i;
}
int main(int argc, char* argv[])
{
	int a, b, k, t;
	freopen("input.txt", "r", stdin); 
	while(scanf("%d%d%d", &a, &b, &k), a) {
		if(count(a, k)==count(b,k)) t=-1;
		else t=a+b;
		printf("%d\n", t);
	}
	return 0;
}
/*
#include <stdio.h>
int count(int a,int k){int i = 1;while(k--)i*=10;return a%i;}
void main(){int a,b,k,t;while(scanf("%d%d%d",&a,&b,&k),a){if(count(a,k)==count(b,k))t=-1;else t=a+b;printf("%d\n",t);}}
*/