#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b)
{
	return *((int*)a)>*((int*)b)?1:-1;
}
int main(int argc, char* argv[])
{
	int n, num[1000], i, early;
	freopen("input.txt", "r", stdin); 
	while(~scanf("%d", &n))  {
		for (i=0;i<n;i++) {
			scanf("%d", &num[i]);
		}
		qsort(num, n, sizeof(int), compare);
		printf("%d", num[0]);
		for (i=1, early=num[0]; i<n; i++){
			if (early==num[i]) continue;
			printf(" %d", num[i]);
			early = num[i];
		}
		printf("\n");
	}
	return 0;
}