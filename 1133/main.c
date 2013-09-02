#include <stdio.h>
#define MAX 10
#define SET(A,B)    if (i<(A)){\
    map[i] = (B);\
    continue;\
}
int n;
int score[MAX];
int count[MAX];
double map[101];

void init()
{
    int i;
    for (i = 0; i < 101; i++) {
        SET(60,0);
        SET(64,1.0);
        SET(68,1.5);
        SET(72,2.0);
        SET(75,2.3);
        SET(78,2.7);
        SET(82,3.0);
        SET(85,3.3);
        SET(90,3.7);
        SET(101,4.0);
    }
}
int main(int argc, char* argv[])
{
    int i,tscore;
    double tcount;
    init();
	freopen("input.txt", "r", stdin);
    while (scanf("%d", &n) != EOF) {
        for (i =tscore= 0; i < n; i++) {
            scanf("%d", &score[i]);
            tscore += score[i];
        }
        for (i =tcount= 0; i < n; i++) {
            scanf("%d", &count[i]);
            tcount += map[count[i]] * score[i];
        }
        printf("total count %.2f ,total score %d\n",tcount, tscore);
        printf("%.2f\n", tcount/tscore);
    }

	return 0;
}
