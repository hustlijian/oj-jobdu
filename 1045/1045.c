#include <stdio.h>

int main(int argc, char* argv[])
{
	int n;	
	int x, y, z;

	freopen("input.txt", "r", stdin);
	while(scanf("%d", &n) != EOF) {
		for (x=0; x<=100; x++) {
			for (y=0; y<=(100-x); y++) {
				z = 100 - x - y;
				if (n>=(5*x+3*y+z/3.0))
					printf("x=%d,y=%d,z=%d\n", x, y, z);
			}
		}
	}
	return 0;
}
