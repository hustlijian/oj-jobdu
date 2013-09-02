#include <stdio.h>

int main(int argc, char* argv[])
{
	int n, i;
	char str[10000][18];

	freopen("input.txt", "r", stdin); 
	while (~scanf("%d", &n)) {
		for (i=0; i<n; i++)
			scanf("%s", str[i]);
		for (i=n-1; i>0; i--)
			printf("%s ", str[i]);
		printf("%s\n", str[i]);
	}
	return 0;
}
