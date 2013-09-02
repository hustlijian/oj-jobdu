#include <stdio.h>

int main(int argc, char* argv[])
{
	char s[201], t[101], *p, *q;
	freopen("input.txt", "r", stdin); 
	while(~scanf("%s%s", s, t)) {
		for(p=s;*++p;);
		for(q=t;*p++=*q++;);
		printf("%s\n", s);
	}
	return 0;
}
/*
good one:
main(t){for(;t=~getchar();t+33&&putchar(~t));}
*/