#include <stdio.h>
#include <time.h>

int main(int argc, char* argv[])
{
    freopen("input.txt", "r", stdin);
    double start, end;
    start = clock();

    end = clock();
    printf("%.3lf MS\n", (end-start)/1000);	
    return 0;
}
