#include <stdio.h>

int main(int argc, char* argv[])
{
	int x1 = 0, y1 = 0, x2 = 0, y2 = 0;
	int x, y;

	freopen("input.txt", "r", stdin);
	
	do 
	{
		if (x1||y1||x2||y2) {
			x1 = x2 = x;
			y1 = y2 = y;
		} else {
			x1 = y1 = 232;
			x2 = y2 = -232;
		}
		while (scanf("%d%d", &x, &y), x||y) {
			x1 = x1<x?x1:x;
			y1 = y1<y?y1:y;
			x2 = x2>x?x2:x;
			y2 = y2>y?y2:y;
		}
		printf("%d %d %d %d\n", x1, y1, x2, y2);
		scanf("%d%d", &x, &y);
	} while (x||y);

	return 0;
}