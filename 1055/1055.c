#include <stdio.h>
#include <string.h>

int main(int argc, char* argv[])
{
	char str[201];
	int i;
	freopen("input.txt", "r", stdin); 
	while(~scanf("%s", str)) {
		for (i=strlen(str)-1; i>=0;i--)
			putchar(str[i]);
		putchar('\n');
	}
	return 0;
}