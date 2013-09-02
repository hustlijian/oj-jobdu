#include <stdio.h>

int main(int argc, char* argv[])
{
	int n, i, num[201];
	freopen("input.txt", "r", stdin); 
	
	while(~scanf("%d", &n)) {
		for (i=1; i<=n; i++)
			scanf("%d", &num[i]);
		scanf("%d", &num[0]);
		i = n+1;
		while(num[--i] != num[0]) ;
		printf("%d\n", i-1);
	}
	return 0;
}