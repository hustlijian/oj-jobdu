#include <stdio.h>

int main(int argc, char* argv[])
{
    int N, i, n, j, num[3],a,b,c, start;
	freopen("input.txt", "r", stdin);
    while(scanf("%d", &N)!=EOF){
        for (i = 0; i < N; i++) {
            start = 1;
            scanf("%d", &n);
            scanf("%d", &num[0]);
            scanf("%d", &num[1]);
            if (num[0] != num[1]) {
                printf("0");
                start = 0;
            }
            for (j = 2; j < n; j++) {
                scanf("%d", &num[j%3]);
                a = (j+1)%3;
                b = (j+2)%3;
                c = j%3;
                if (start) {
                    if (num[b]>num[a] && num[b]>num[c]) {
                        printf("%d", j-1);
                        start = 0;
                    }else if (num[b]<num[a] && num[b]<num[c]) {
                        printf("%d", j-1);
                        start = 0;
                    }
                } else {
                    if (num[b]>num[a] && num[b]>num[c]) {
                        printf(" %d", j-1);
                    }else if (num[b]<num[a] && num[b]<num[c]) {
                        printf(" %d", j-1);
                    }
                }
            }

            j--;
            c = j%3;
            b = (j+2)%3;
            if (num[c] != num[b]) {
                printf(" %d",j);
            }
            printf("\n");
        }
    }

	return 0;
}
