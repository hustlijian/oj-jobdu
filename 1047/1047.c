#include <stdio.h>

int isPrime(int n)
{
	int i;
	if (n<2) return 0;
	for (i=2;i*i<=n;i++){
		if (!(n%i)) return 0;
	}
	return 1;
}
int main(int argc, char* argv[])
{
	int n;
	freopen("input.txt", "r", stdin); 
	while(~scanf("%d", &n)) {
		if(isPrime(n)) printf("yes\n");
		else printf("no\n");
	}
	return 0;
}