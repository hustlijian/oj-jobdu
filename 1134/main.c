#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

char str[81];

void change()
{
    int i;
    for (i = 0; str[i]; i++) {
        if (islower(str[i])) {
            str[i] = 'a' + ((str[i]-'a'+1)%26);
        }
        if (isupper(str[i])) {
            str[i] = 'A' + (str[i]-'A'+1)%26;
        }
    }
}
int main(int argc, char* argv[])
{
    char num[10];
    int n, i;
	freopen("input.txt", "r", stdin);
    while(gets(num) != NULL){
        n = atoi(num);
        for (i = 0; i < n; i++) {
            gets(str);
            change();
            puts(str);
        }
    }

	return 0;
}
