#include <stdio.h>
#include <assert.h>

int main(int argc, char* argv[])
{
	int i,n, max;
	freopen("input.txt", "r", stdin); 
	while (~scanf("%d", &max)){
		for (i=0; i<9; i++) {
			scanf("%d", &n);
			if (n > max) max = n;
		}
		printf("max=%d\n", max);
	}
	return 0;
}