#include <stdio.h>

int main(int argc, char* argv[])
{
	int n, a[21], i, b, c;
	
	freopen("input.txt", "r", stdin); 
	while(~scanf("%d", &n)) {
		for (i=0; i<n; i++)
			scanf("%d", &a[i]);
		for (i=1, c=b=0; i<n; i++) {
			c = a[c]>a[i]?c:i;
			b = a[b]<a[i]?b:i;
		}
		a[i]=a[c], a[c]=a[b], a[b]=a[i];
		for (i=0; i<n-1; i++)
			printf("%d ", a[i]);
		printf("%d\n", a[i]);
	}
	return 0;
}