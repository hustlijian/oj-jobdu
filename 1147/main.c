#include <stdio.h>
#include <time.h>

int main(int argc, char* argv[])
{
    int a,b,n,A,B;
    freopen("input.txt", "r", stdin);
    double start, end;
    start = clock();
    while (~scanf("%d%d%d", &a, &b, &n)) {
        printf("%d %d %d\n", a, b, n);
        if (n==a) {//a=n
            printf("fill A\n");
        } else if (n==b) { //b=n
            printf("fill B\n");
        } else if (n%(b-a)==0) { //k(b-a)=n
            A = B = 0;
            while (1) {
                if (A==a) {
                    printf("empty A\n");
                    A = 0;
                    printf("pour B A\n");
                    if (B>a) {
                        A = a;
                        B -= a;
                    } else {
                        A = B;
                        B = 0;
                    }
                    if (B==n) {
                        break;
                    }
                }
                printf("fill B\n");
                B = b;
                printf("pour B A\n");
                B -= (a-A);
                A = a;
                if (B==n) {
                    break;
                }
            }
        } else {//a+k(a-b)=n
            A = B = 0;
            while (1) {
                if (B==b) {
                    printf("empty B\n");
                    B = 0;
                    printf("pour A B\n");
                    B = A;
                    A = 0;
                }
                printf("fill A\n");
                A = a;
                printf("pour A B\n");
                if (A>(b-B)) {
                    A -= (b-B);
                    B = b;
                } else {
                    B += A;
                    A = 0;
                }
                if (B==n) {
                    break;
                }
                if (A==n) {
                    break;
                }
            }
        }
        printf("success\n");
    }

    end = clock();
    printf("%.3lf MS\n", (end-start)/1000);	
    return 0;
}
