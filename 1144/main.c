#include <stdio.h>
#include <string.h>
#include <math.h>
#include <time.h>

typedef struct _N {
    double x,y;
}Node;

Node node[100];
int flag[100];
int D[100];
int n;
double sum;

double distant(int a, int b)
{
    return sqrt((node[a].x-node[b].x)*(node[a].x-node[b].x)+
            (node[a].y-node[b].y)*(node[a].y-node[b].y));
}
void check()
{
    int i,j,k;
    double min;
    memset(flag, 0, sizeof(flag));
    memset(D, 0, sizeof(D));
    flag[0] = 1;
    D[0] = 0;
    for (i = 1; i < n; i++) {
        min = -1;
        for (j = 0; j < i; j++) {
            for (k = 0; k < n; k++) {
                if (flag[k]==0) {
                    if (min < 0) {
                        min = distant(D[j],k);
                        D[i] = k;
                    } else if (min > distant(D[j],k)) {
                        D[i] = k;
                        min = distant(D[j],k);
                    }
                }
            }
        }
        sum += min;
        flag[D[i]] = 1;
    }
}
int main(int argc, char* argv[])
{
    int i;
    freopen("input.txt", "r", stdin);
    double start, end;
    start = clock();
    while (~scanf("%d", &n)) {
        sum = 0;
        for (i = 0; i < n; i++) {
            scanf("%lf %lf", &node[i].x, &node[i].y);
            //printf("%.2lf %.2lf\n", node[i].x, node[i].y);
        }
        check();
        printf("%.2lf\n", sum);
    }

    end = clock();
    printf("%.3lf MS\n", (end-start)/1000);	
    return 0;
}
