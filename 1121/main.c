#include <stdio.h>
#include <ctype.h>
void change(char *str)
{
    int i;
    for (i = 0; str[i]; i++) {
        if (isspace(str[i])) {
            str[i+1] = toupper(str[i+1]);
        }
    }
}
int main(int argc, char* argv[])
{
    char str[102];
	freopen("input.txt", "r", stdin);
    str[0] = ' ';
    while (gets(str+1) != NULL) {
        change(str);
        puts(str+1);
    }

	return 0;
}
