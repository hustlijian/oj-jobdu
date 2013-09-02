#include <stdio.h>

int main(int argc, char* argv[])
{
	int a, b, i, t;
	freopen("input.txt", "r", stdin); 
	while(~scanf("%d", &a)) {
		for (i=0,t=0; i<5; i++) {
			scanf("%d", &b);
			t+= b<a?b:0;
		}
		printf("%d\n", t);
	}
	return 0;
}