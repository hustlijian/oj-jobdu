#include <stdio.h>
#include <time.h>

int p,e,i,d,n,m;

int main(int argc, char* argv[])
{
    int R1=5544, R2=14421, R3=1288,R=21252;
    freopen("input.txt", "r", stdin);
    double start, end;
    start = clock();

    while (~scanf("%d%d%d%d", &p,&e,&i,&d)) {
        if(p==-1)break;
        n++;
        m = (R1*p+R2*e+R3*i-d)%R;
        m = (m+R-1)%R+1;
        printf("Case %d: the next triple peak occurs in %d days.\n", n, m);
    }

    end = clock();
    printf("%.3lf MS\n", (end-start)/1000);	
    return 0;
}
