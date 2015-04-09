#include <stdio.h>
#include <string.h>

#define MAXN 102
#define MAXM 102
#define MAXS 10001

char map[MAXM][MAXN], tmap[MAXM][MAXN];
char cmd[MAXS];
int x, y, tx, ty;
int flag2;

int down()
{
    int nx = tx+1;
    int ny = ty;

    if (tmap[nx][ny] == '4') {
        return 1;
    } else if (tmap[nx][ny] == '3') {
        if (tmap[nx+1][ny] == '0') { // move
            tmap[nx][ny] = '1';
            tmap[nx+1][ny] = '3';
            if (flag2) {
                tmap[tx][ty] = '2';
                flag2 = 0;
            } else {
                tmap[tx][ty] = '0';
            }
            tx = nx, ty = ny;
            return 2;
        } else if (tmap[nx+1][ny] == '2') {
            return 0; // success
        } else { // '4'
            return 1;
        }
    } else if(tmap[nx][ny] == '2'){ // '2' move
        flag2 = 1;
        tmap[nx][ny] = '1';
        tmap[tx][ty] = '0';
        tx = nx;
        ty = ny;
        return 3;
    } else { // '0', move
        if (flag2) {
            tmap[tx][ty] = '2';
            flag2 = 0;
        } else {
            tmap[tx][ty] = '0';
        }
        tmap[nx][ny] = '1';
        tx = nx;
        ty = ny;
        return 2;
    }
}

int up()
{
    int nx = tx-1;
    int ny = ty;

    if (tmap[nx][ny] == '4') {
        return 1;
    } else if (tmap[nx][ny] == '3') {
        if (tmap[nx-1][ny] == '0') { // move
            tmap[nx][ny] = '1';
            tmap[nx-1][ny] = '3';
            if (flag2) {
                tmap[tx][ty] = '2';
                flag2 = 0;
            } else {
                tmap[tx][ty] = '0';
            }
            tx = nx, ty = ny;
            return 2;
        } else if (tmap[nx-1][ny] == '2') {
            return 0; // success
        } else { // '4'
            return 1;
        }
    } else if(tmap[nx][ny] == '2'){ // '2' move
        flag2 = 1;
        tmap[nx][ny] = '1';
        tmap[tx][ty] = '0';
        tx = nx;
        ty = ny;
        return 3;
    } else { // '0', move
        if (flag2) {
            tmap[tx][ty] = '2';
            flag2 = 0;
        } else {
            tmap[tx][ty] = '0';
        }
        tmap[nx][ny] = '1';
        tx = nx;
        ty = ny;
        return 2;
    }
}

int left()
{
    int nx = tx;
    int ny = ty-1;

    if (tmap[nx][ny] == '4') {
        return 1;
    } else if (tmap[nx][ny] == '3') {
        if (tmap[nx][ny-1] == '0') { // move
            tmap[nx][ny] = '1';
            tmap[nx][ny-1] = '3';
            if (flag2) {
                tmap[tx][ty] = '2';
                flag2 = 0;
            } else {
                tmap[tx][ty] = '0';
            }
            tx = nx, ty = ny;
            return 2;
        } else if (tmap[nx][ny-1] == '2') {
            return 0; // success
        } else { // '4'
            return 1;
        }
    } else if(tmap[nx][ny] == '2'){ // '2' move
        flag2 = 1;
        tmap[nx][ny] = '1';
        tmap[tx][ty] = '0';
        tx = nx;
        ty = ny;
        return 3;
    } else { // '0', move
        if (flag2) {
            tmap[tx][ty] = '2';
            flag2 = 0;
        } else {
            tmap[tx][ty] = '0';
        }
        tmap[nx][ny] = '1';
        tx = nx;
        ty = ny;
        return 2;
    }
}

int right()
{
    int nx = tx;
    int ny = ty+1;

    if (tmap[nx][ny] == '4') {
        return 1;
    } else if (tmap[nx][ny] == '3') {
        if (tmap[nx][ny+1] == '0') { // move
            tmap[nx][ny] = '1';
            tmap[nx][ny+1] = '3';
            if (flag2) {
                tmap[tx][ty] = '2';
                flag2 = 0;
            } else {
                tmap[tx][ty] = '0';
            }
            tx = nx, ty = ny;
            return 2;
        } else if (tmap[nx][ny+1] == '2') {
            return 0; // success
        } else { // '4'
            return 1;
        }
    } else if(tmap[nx][ny] == '2'){ // '2' move
        flag2 = 1;
        tmap[nx][ny] = '1';
        tmap[tx][ty] = '0';
        tx = nx;
        ty = ny;
        return 3;
    } else { // '0', move
        if (flag2) {
            tmap[tx][ty] = '2';
            flag2 = 0;
        } else {
            tmap[tx][ty] = '0';
        }
        tmap[nx][ny] = '1';
        tx = nx;
        ty = ny;
        return 2;
    }
}

int one_step(char command)
{
    int ret;
    switch (command) {
        case 'd':
            ret = down();
            break;
        case 'u':
            ret = up();
            break;
        case 'l':
            ret = left();
            break;
        case 'r':
            ret = right();
            break;
        default:
            ret = -1;
            break;
    }

    return ret;
}

int main(int argc, char* argv[])
{
    freopen("input.txt", "r", stdin);

    int N, M, S, T;
    int i, j, ret;
    scanf("%d %d %d", &N, &M, &S);
    //printf("%d %d %d\n", N, M, S);
    memset(map[0], '4', N+2);
    map[0][N+2] = '\0';
    for (i = 1; i <= M; i++) {
        map[i][0] = '4';
        scanf("%s", &map[i][1]);
        map[i][N+1] = '4';
    }
    memset(map[M+1], '4', N+2);
    map[M+1][N+2] = '\0';

    for (i = 0; i < M+2; i++) {
        // printf("%s\n", map[i]);
    }
    for (i = 1; i <= M; i++) {
        for (j = 1; j <= N; j++) {
            if (map[i][j] == '1') {
                x = i;
                y = j;
            }
        }
    }
    // printf("x=%d, y=%d\n", x, y);
    
    for (i = 0; i < S; i++) {
        flag2 = 0;
        memcpy(tmap, map, MAXM*MAXN);
        for (j = 0; j < M+2; j++) {
            // printf("%s\n", tmap[j]);
        }
        tx = x;
        ty = y;

        scanf("%d", &T);
        // printf("%d ", T);
        scanf("%s", cmd);
        // printf("%s\n", cmd);

        for (j = 0; j < T; j++) {
            ret = one_step(cmd[j]);
            if (ret == 0) {
                break;
            }
        }

        if (ret == 0) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}
