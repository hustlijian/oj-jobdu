#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char str[40];
int change()
{
    int i, t, len= strlen(str);

    for (i =t= 0; i < len; i++) {
       t += (str[i]-'0')*(((1<<(len-i))-1)); 
    }
    return t;
}

int main(int argc, char* argv[])
{
	freopen("input.txt", "r", stdin);
    while (1) {
        scanf("%s", str);
        if (!strcmp(str, "0")) {
            break;
        }
        //printf("%s\n",str);
        printf("%d\n", change());
    }

	return 0;
}
