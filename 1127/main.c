#include <stdio.h>
#include <string.h>
#include <ctype.h>

char str[201];

void decode()
{
    int i;
    for (i = 0; str[i]; i++) {
        if (isupper(str[i])) {
            str[i] = 65 + (str[i]-44)%26;
        }
    }
}
int main(int argc, char* argv[])
{
	freopen("input.txt", "r", stdin);
    while (1) {
        gets(str);
        if (strcmp(str, "ENDOFINPUT")==0) {
            break;
        }
        gets(str);
        decode();
        printf("%s\n",str);
        gets(str);
    }

	return 0;
}
