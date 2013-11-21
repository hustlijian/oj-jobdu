#include <stdio.h>
#include <time.h>

int main(int argc, char* argv[])
{
    int a, b, t, i;
    char op;
    freopen("input.txt", "r", stdin);
    double start, end;
    start = clock();
    while (~scanf("%d ", &a)) { //one more space
        //printf("a: %d ", a);
        scanf("%c", &op);
        //printf("op: %c ", op);
        if (op=='!') {
            for (t=1,i=0; i < a; i++) {
                t *= i+1;
            }
            printf("%d\n", t);
            continue;
        }
        scanf("%d", &b);
        //printf("b: %d\n", b);
        switch (op) {
            case '+':t = a+b;break;
            case '-':t = a-b;break;
            case '*':t = a*b;break;
            case '/':
                     if (!b) {
                         printf("error\n");
                         continue;
                     }
                     t = a/b;break;
            case '%':
                     if (!b) {
                         printf("error\n");
                         continue;
                     }
                     t = a%b;break;
        }
        printf("%d\n", t);
    }

    end = clock();
    printf("%.3lf MS\n", (end-start)/1000);	
    return 0;
}
