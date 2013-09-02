#include <stdio.h>

#define MAX 100

int main(int argc, char* argv[])
{
    int map[MAX];
    int n, i, j;
	freopen("input.txt", "r", stdin);

    map[0] = 0;
    map[1] = 1;
    for (i = 2; i < MAX; i++) {
        map[i] = map[i-1] + map[i-2];
    }

    while (scanf("%d", &n) != EOF) {
        for (i = 0; i < n; i++) {
            printf("0");
            for (j = 1; j < 2*i+1; j++) {
                printf(" %d", map[j]);
            }
            printf("\n");
        }
    }

	return 0;
}
