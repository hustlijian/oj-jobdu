#include <stdio.h>

int main(int argc, char* argv[])
{
	int N;
	int num[1000];
	int t,i, total;

	freopen("input.txt", "r", stdin);

	while(scanf("%d", &N), N) {
		for (i=0; i<N; i++)
			scanf("%d", &num[i]);
		scanf("%d", &t);
		for (i=0, total=0; i<N; i++)
			if (t == num[i]) total ++;
		printf("%d\n", total);
	}
	return 0;
}