#include <stdio.h>

int main(int argc, char* argv[])
{
	int n, x, y, z;
	int i, j, t;
	freopen("input.txt", "r", stdin); 
	while(scanf("%d", &n) != EOF) {
		scanf("%d%d%d", &x, &y, &z);
		for (i=9; i>0; i--)	{
			for (j=9; j>=0; j--) {
				t = i*10000 + x*1000 + y*100 + z*10 + j;
				if (!(t%n)) break;
			}
			if (!(t%n)) break;
		}
		if (!(t%n)) printf("%d %d %d\n", i, j, t/n);
		else printf("0\n");
	}
	return 0;
}