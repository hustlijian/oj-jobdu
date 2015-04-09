#include <stdio.h>
#include <string.h>
#include <time.h>

#define MAXN 202

int map[MAXN][MAXN];
int N, M;

int up(int x, int y, int value, int k);
int down(int x, int y, int value, int k);
int right(int x, int y, int value, int k);
int left(int x, int y, int value, int k);

void show()
{
    int i, j;
    for (i = 0; i < N+2; i++) {
        for (j = 0; j < M+2; j++) {
            printf("%d ", map[i][j]);
        }
        printf("\n");
    }
}

int up(int nx, int ny, int value, int k)
{
    int total = 0;
    if (nx < 0) { // out range
        return 0;
    } 
    if (k < 0) { // out of k
        return 0;
    }

    if (map[nx][ny] == 0) { // go on
        total += up(nx-1, ny, value, k);
        total += left(nx, ny-1, value, k-1);
        total += right(nx, ny+1, value, k-1);
    } else if (map[nx][ny] == value) { // get one
        total += 1;
        map[nx][ny] = value*2;
    } 
    return total;
}

int down(int nx, int ny, int value, int k)
{
    int total = 0;
    if (nx > N+1) { // out range
        return 0;
    } 
    if (k < 0) { // out of k
        return 0;
    }

    if (map[nx][ny] == 0) { // go on
        total += down(nx+1, ny, value, k);
        total += left(nx, ny-1, value, k-1);
        total += right(nx, ny+1, value, k-1);
    } else if (map[nx][ny] == value) { // get one
        total += 1;
        map[nx][ny] = value*2;
    } 
    return total;
}

int right(int nx, int ny, int value, int k)
{
    int total = 0;
    if (ny > M+1) { // out range
        return 0;
    } 
    if (k < 0) { // out of k
        return 0;
    }

    if (map[nx][ny] == 0) { // go on
        total += right(nx, ny+1, value, k);
        total += up(nx-1, ny, value, k-1);
        total += down(nx+1, ny, value, k-1);
    } else if (map[nx][ny] == value) { // get one
        total += 1;
        map[nx][ny] = value*2;
    } 
    return total;
}

int left(int nx, int ny, int value, int k)
{
    int total = 0;
    if (ny < 0) { // out range
        return 0;
    } 
    if (k < 0) { // out of k
        return 0;
    }

    if (map[nx][ny] == 0) { // go on
        total += left(nx, ny-1, value, k);
        total += up(nx-1, ny, value, k-1);
        total += down(nx+1, ny, value, k-1);
    } else if (map[nx][ny] == value) { // get one
        total += 1;
        map[nx][ny] = value*2;
    } 
    return total;
}

int count(int x, int y, int value, int k)
{
    int total = 0;
    map[x][y] = value*2;
    total += up(x-1, y, value, k);
    total += down(x+1, y, value, k);
    total += right(x, y+1, value, k);
    total += left(x, y-1, value, k);
    return total;
}

int main(int argc, char* argv[])
{
    freopen("input.txt", "r", stdin);
    int S, X, Y, K;
    int i, j;

    scanf("%d", &S);
    // printf("%d\n", S);
    while (S--) {
        scanf("%d %d", &N, &M);
        // printf("%d %d\n", N, M);
        memset(map[0], 0, sizeof(int)*MAXN);
        for (i = 1; i <= N; i++) {
            map[i][0] = 0;
            for (j = 1; j <= M; j++) {
                scanf("%d", &map[i][j]);
            }
            map[i][M+1] = 0;
        }
        memset(map[N+1], 0, sizeof(int)*MAXN);
        // show();
        scanf("%d %d %d", &X, &Y, &K);
        // printf("%d %d %d\n", X, Y, K);
        printf("%d\n", count(X, Y, map[X][Y], K));
        // show();
    }
    return 0;
}
