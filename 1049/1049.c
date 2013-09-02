#include <stdio.h>

int main(int argc, char* argv[])
{
	char str[100], c;
	int i;
	freopen("input.txt", "r", stdin); 
	
	while(~scanf("%s\n", str)) {
		scanf("%c", &c);
		for (i=0; str[i]!='\0'; i++)
			if (str[i]!=c) putchar(str[i]);
			putchar('\n');
	}
	
	return 0;
}

