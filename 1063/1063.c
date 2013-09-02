#include <stdio.h>

int main(int argc, char* argv[])
{
	int n;
	freopen("input.txt", "r", stdin); 
	while(~scanf("%d", &n)) {
		printf("%d\n", n<0?-3*n*(n-1)/2:3*n*(n+1)/2);
	}
	return 0;
}