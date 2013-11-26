#include <stdio.h>
#include <time.h>

char a[31], out[150];
int pos;
void run()
{
    int i,c;
    for (c =i = 0; a[i]; i++) {
        c = c*10 + a[i]-'0';
        a[i] = c /2 + '0';
        c %= 2;
    }
    //printf("%d", c);
    out[pos++] = c+'0';
    for (i = 0; a[i]; i++) {
        if (a[i]!='0') {
            break;
        }
    }
    if (a[i]) {
        run();
    }
}
int main(int argc, char* argv[])
{
    int i;
    freopen("input.txt", "r", stdin);
    double start, end;
    start = clock();
    while (~scanf("%s",a)) {
        pos = 0;
        run();
        for (i = pos-1; i >=0; i--) {
            printf("%c", out[i]);
        }
        printf("\n");
    }

    end = clock();
    printf("%.3lf MS\n", (end-start)/1000);	
    return 0;
}
