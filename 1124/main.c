#include <stdio.h>
#define MAX     100+1

char a[MAX];
int getroot()
{
    int i, n;
    while(a[1]) {
        for (n=i=0; a[i]; i++) {
            n += a[i]-'0';
        }
        for (i = 0; n>0; i++) {
            a[i] = n%10 + '0';
            n /= 10;
        }
        a[i] = '\0';
    }
    return a[0]-'0';
}
int main(int argc, char* argv[])
{
	freopen("input.txt", "r", stdin);
    while (scanf("%s", a)!=EOF) {
        if (a[0]=='0' && a[1]=='\0') {
            break;
        }
        printf("%d\n",getroot());
    }

	return 0;
}
