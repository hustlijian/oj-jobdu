#include <stdio.h>
char str[7];

void swap(char *a, char *b)
{
    char c = *a;
    *a = *b;
    *b = c;
}
void arrange(int pos)
{
    int i;
    
    if (str[pos] == '\0') {
        printf("%s\n", str);
        return ;
    }
    for (i = pos; str[i]; i++) {
        swap(&str[i], &str[pos]);
        arrange(pos+1);
        swap(&str[pos], &str[i]);
    }
}
int main(int argc, char* argv[])
{
	freopen("input.txt", "r", stdin);
    while (scanf("%s", str) != EOF) {
        //printf("%s\n", str);
        arrange(0);
        printf("\n");
    }

	return 0;
}
