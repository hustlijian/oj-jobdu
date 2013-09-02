#include <stdio.h>

int main(int argc, char* argv[])
{
	int A[11][11], B[10][10], i, j, m, n, t;

	freopen("input.txt", "r", stdin); 
	while(scanf("%d%d", &m, &n),m) {
		for (i=0; i<m; i++) {
			for (j=0; j<n; j++) {
				scanf("%d", &A[i][j]);
				A[m][j] = 0;
			}
			A[i][n] = 0;
		}
		for (i=0; i<m; i++)
			for (j=0; j<n; j++) {
				scanf("%d", &B[i][j]);
				A[i][j] += B[i][j];
				A[i][n] += A[i][j];
				A[m][j] += A[i][j];
			}
			
		for (t=0, i=0;i<m;i++)
			if (!A[i][n]) t++;
		for (j=0; j<n; j++)
			if (!A[m][j]) t++;
		printf("%d\n", t);
	}
	return 0;
}