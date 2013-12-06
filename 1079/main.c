#include <stdio.h>
#include <time.h>

int map[27]={21,22,23,31,32,33,41,42,43,51,52,53,61,62,63,71,72,73,74,81,82,83,91,92,93,94};
char a[101];

int sum()
{
    int i, t, p, n;
    for (i = t = p= 0; a[i]; i++) {
        n = map[a[i]-'a'];
        if ((n/10)==(p/10)) {
            t += 2;
        }
        t += n % 10;
        p = n;
    }
    return t;
}
int main(int argc, char* argv[])
{
    freopen("input.txt", "r", stdin);
    double start, end;
    start = clock();
    while (~scanf("%s", a)) {
        //printf("%s\n", a);
        printf("%d\n", sum());
    }

    end = clock();
    printf("%.3lf MS\n", (end-start)/1000);	
    return 0;
}
