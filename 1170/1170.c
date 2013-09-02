#include <stdio.h>

int main(int argc, char* argv[])
{
	int n, x, y, i, x0,y0;
	freopen("input.txt", "r", stdin); 
	while(~scanf("%d%d%d", &n, &x0, &y0)) {
		for (i=1;i<n;i++) {
			scanf("%d%d", &x,&y);
			if (x0>x||(x0==x&&y0>=y)) x0=x, y0=y;
		}
		printf("%d %d\n", x0, y0);
	}
	return 0;
}