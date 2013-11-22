#include <stdio.h>
#include <string.h>
#include <time.h>

char a[101], t[103];
void reverse(char *str, int len)
{
    int i=0,j=len-1,t;
    for (; i < j; i++, j--) {
        t=str[i],str[i]=str[j],str[j]=t; 
    }
}
void add()
{
    int c, i;
    reverse(a, strlen(a));
    for (c=i=0; a[i]; i++) {
        c+= a[i]-'0'+t[i]-'0';
        t[i] = c % 10 + '0';
        c /= 10;
    }
    for (;c; i++) {
        c += t[i]-'0';
        t[i] = c % 10 + '0';
        c /= 10;
    }
}
int main(int argc, char* argv[])
{
    int i;
    freopen("input.txt", "r", stdin);
    double start, end;
    start = clock();
    memset(t, '0', sizeof(t));
    while (~scanf("%s", a)) {
        if (!strcmp(a,"0")) {
            break;
        }
        //printf("%s\n", a);
        add();
    }
    for (i = 103; i > 0; i--) {
        if (t[i]>'0') {
            break;
        }
    }
    t[i+1] = '\0';
    reverse(t, strlen(t));
    printf("%s\n", t);

    end = clock();
    printf("%.3lf MS\n", (end-start)/1000);	
    return 0;
}
