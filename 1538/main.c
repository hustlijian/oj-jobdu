#include <stdio.h>
char a[10000];

int main(int argc, char* argv[])
{
    int i;
    freopen("input.txt", "r", stdin);

    while (~scanf("%s", a)) {
        //printf("%s\n", a);
        for (i = 0; a[i]; i++) {
            if (a[i]>'r') {
                a[i]--;
            }
            if (a[i]>'x') {
                a[i]='x';
            }
            a[i] = (a[i]-'a')/3 + '2';
        }
        printf("%s\n", a);
    }
	return 0;
}
