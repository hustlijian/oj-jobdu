#include <stdio.h>
#include <stdlib.h>

int array[10000];

int cmp(const void*a, const void *b)
{
    return *(int*)a - *(int *)b;
}

int main(int argc, char* argv[])
{
    int n, i;
	freopen("input.txt", "r", stdin);
    while (scanf("%d", &n) && n) {
        for (i = 0; i < n; i++) {
            scanf("%d", &array[i]);
            //printf("%d\n", array[i]);
        }
        qsort(array, n, sizeof(int), cmp);
        if (n&0x1) {
            printf("%d\n", array[(n-1)/2]);
        } else {
            printf("%d\n", ((array[n/2] + array[n/2 - 1]))/2);
        }
    }

	return 0;
}
