#include <stdio.h>
#include <time.h>

int main(int argc, char* argv[])
{
    freopen("input.txt", "r", stdin);
    double start, end;
    long a=1;
    int num;
    start = clock();
    while (~scanf("%d", &num)) {
        printf("%d\n", num);
        printf("%ld\n", a<<(num-1));
    }

    end = clock();
    printf("%.3lf MS\n", (end-start)/1000);

	return 0;
}
