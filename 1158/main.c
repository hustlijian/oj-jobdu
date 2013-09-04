#include <stdio.h>

int main(int argc, char* argv[])
{
    int N, K, i;
    double M, k, P;

	freopen("input.txt", "r", stdin);
    while (scanf("%d %d",&N, &K) == 2) {
        //printf("%d %d\n", N, K);
        k = K/100.0+1;
        M = N;
        P = 200;
        for (i = 0; i < 20; i++) {
            if (M >= P) {
                printf("%d\n", i+1);
                break;
            }
            M += N;
            P *= k;
        }
        if (i>=20) {
            printf("Impossible\n");
        }
    }

	return 0;
}
