/***********************************************
 M个苹果放到N个可以空的盘子中，可以分解为0个盘子
 空，1个盘子空...到N-1个盘子空，使用递归的方法
  **********************************************/

#include <stdio.h>

int getnum(int M, int N)
{
    int i, sum;

    if (M == 0 || M == 1) {
        return 1;
    }
    if (N == 1) {
        return 1;
    }
    sum = 0;
    for (i = 1; i <= N; i++) {
        if ((M-i) < 0) {
            break;
        }
        sum += getnum(M-i, i);
    }
    return sum;
}

int main(int argc, char* argv[])
{
    int t, M, N;
    freopen("input.txt", "r", stdin);
    scanf("%d", &t);
    while (t--) {
        scanf("%d %d", &M, &N);
        printf("%d %d\n", M, N);
        
        printf("%d\n", getnum(M, N));
    }

	return 0;
}
