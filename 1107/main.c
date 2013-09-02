#include <stdio.h>

short list[10000];

int get_min(int pos, int n){
    int i, min, t;
    min = pos;
    for (i = pos+1; i < n; i++) {
        if (list[i]<list[min]) {
            min = i;
        }
    }
    t = list[min], list[min] = list[pos], list[pos] = t;
    return list[pos];
}
int main(int argc, char* argv[])
{
    int n, i, total;
	freopen("input.txt", "r", stdin);

    while (scanf("%d", &n), n) {
        for (i = 0; i < n; i++) {
            scanf("%hd", &list[i]);
        }
        for (i=total=0; i < n-1; i++) {
            total += get_min(i, n);
            total += get_min(i+1, n);
            list[i+1] += list[i];
        }
        printf("%d\n", total);
    }
	return 0;
}
