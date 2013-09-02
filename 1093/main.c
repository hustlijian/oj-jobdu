#include <stdio.h>

char row1[] = {
    '1', '2', '3', '4', '5', '6', '7', '8', '9', '0', '-', '='
};
char row2[] = {
    'Q', 'W', 'E', 'R', 'T', 'Y', 'U', 'I', 'O', 'P', '[', ']','\\'
};
char row3[] = {
    'A', 'S', 'D', 'F', 'G', 'H', 'J', 'K', 'L', ';', '\''
};
char row4[] = {
    'Z', 'X', 'C', 'V', 'B', 'N', 'M', ',', '.', '/'
};

char setc(char c)
{
    int i;

    if (c == ' ') {
        return c;
    }
    for (i = 0; i < sizeof(row1); i++) {
        if (c == row1[i]) {
            return row1[i-1];
        }
    }

    for (i = 0; i < sizeof(row2); i++) {
        if (c == row2[i]) {
            return row2[i-1];
        }
    }
    for (i = 0; i < sizeof(row3); i++) {
        if (c == row3[i]) {
            return row3[i-1];
        }
    }

    for (i = 0; i < sizeof(row4); i++) {
        if (c == row4[i]) {
            return row4[i-1];
        }
    }
    return c;
}
void repalce(char *str)
{
    int i;
    for (i = 0; str[i]; i++) {
        str[i] = setc(str[i]);
    }
}
int main(int argc, char* argv[])
{
    char str[1024];

	freopen("input.txt", "r", stdin);
    while (gets(str) != NULL) {
        repalce(str);
        puts(str);
    }

	return 0;
}
