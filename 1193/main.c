#include <stdio.h>
int map[100][100];
int main(int argc, char* argv[])
{
    int n, i, j;
    freopen("input.txt", "r", stdin);
    while (~scanf("%d", &n)) {
        for (i = 0; i < n; i++) 
            for (j = 0; j < n; j++)
                scanf("%d", &map[i][j]);
        for (j = 0; j < n; j++) {
            printf("%d", map[0][j]);
            for (i = 1; i < n; i++)
                printf(" %d", map[i][j]);
            printf("\n");
        }
    }
	return 0;
}
