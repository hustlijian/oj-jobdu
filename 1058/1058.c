#include <stdio.h>
int main()
{
	char s[5];
	while(gets(s)){
		printf("%c%c%c%c\n",s[3],s[2],s[1],s[0]);
	}
	return 0;
}