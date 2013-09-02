#include <stdio.h>

int count(int num){
    int total = 0;
    while(num){
        total += num%10;
        num /= 10;
    }
    return total;
}
int main(int argc, char* argv[])
{
    int n;
	freopen("input.txt", "r", stdin);
    while(scanf("%d", &n), n){
        printf("%d %d\n", count(n), count(n*n));
    }
	return 0;
}
