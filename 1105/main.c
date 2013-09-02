#include <stdio.h>
void change(char *str)
{
    int i;
    for (i = 0; str[i]; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = 'z'+'a'-str[i];
            continue;
        }
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = 'Z'+'A'-str[i];
        }
    }
}
int main(int argc, char* argv[])
{
    char str[81];
	freopen("input.txt", "r", stdin);
    while (gets(str) != NULL) {
        if (str[0] == '!' && str[1] == '\0') {
            break;
        }
        change(str);
        puts(str);
    }

	return 0;
}
