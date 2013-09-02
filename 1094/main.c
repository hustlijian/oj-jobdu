#include <stdio.h>
#include <string.h>

#define MAX_LENGTH  1000000

int mystrcmp(char *a, char *b, int len)
{
    int i;
    for (i = 0; i < len; i++) {
        if (a[i] != b[i]) {
            return 1;
        }
    }
    return 0;
}

int main(int argc, char* argv[])
{
    char T[MAX_LENGTH], P[MAX_LENGTH];
    int total, i, tlen, plen;

	freopen("input.txt", "r", stdin);
    while (scanf("%s %s", T, P) != EOF) {
        printf("%s %s\n", T, P);
        tlen = strlen(T);
        plen = strlen(P);
        total = 0;
        for (i = 0; i <= (tlen - plen) ; i++) {
            if (mystrcmp(T+i, P, plen) == 0) {
                total ++;
            }
        }
        printf("%d\n", total);
    }

	return 0;
}
