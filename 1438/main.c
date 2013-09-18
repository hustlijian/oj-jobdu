/*
 * 就是积除以最大公约数，最大公约数用辗转相除法
 */
#include <stdio.h>
/* a <= b */
int min(int a, int b)
{
    int t, m, n;
    t = b%a;
    if (t == 0) {
        return b;
    }
    m = a, n = b;
    while (t) {
        b = a;
        a = t;
        t = b % a;
    }
    if (a==1) {
        return m*n;
    }
    return a*min(m/a, n/a);
}
int main(int argc, char const* argv[])
{
    int a, b;
    freopen("input.txt", "r", stdin);

    while (~scanf("%d %d", &a, &b)) {
        printf("%d %d\n", a, b);
        if (a<=b) {
            printf("%d\n", min(a,b));
        } else
        printf("%d\n", min(b, a));
    }
    return 0;
}

