#include <stdio.h>
char str[7];

void swap(char *a, char *b)
{
    char c = *a;
    *a = *b;
    *b = c;
}
void set(int start, int pos)
{
    char c = str[pos];
    int i;
    for (i = pos; i > start; i--) {
        str[i] = str[i-1];
    }
    str[start] = c;
}
void reset(int start, int pos)
{
    char c = str[start];
    int i;
    for (i = start; i < pos; i++) {
        str[i] = str[i+1];
    }
    str[i] = c;
}
void arrange(int pos)
{
    int i;
    
    if (str[pos] == '\0') {
        printf("%s\n", str);
        return ;
    }
    for (i = pos; str[i]; i++) {
        //swap(&str[i], &str[pos]);
        set(pos, i);
        arrange(pos+1);
        reset(pos, i);
        //swap(&str[pos], &str[i]);
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
