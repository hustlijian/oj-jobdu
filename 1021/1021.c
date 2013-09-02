#include <stdio.h>
#include <string.h>

int count(char t, char *str)
{
	int i, len;
	int total=0;
	for (i=0, len=strlen(str); i<len; i++)
		if (t == str[i]) total++;
	return total;
}
int main(int argc, char* argv[])
{
	char str1[6], str2[81];
	int i, len;

	freopen("input.txt", "r", stdin);
	do 
	{
		gets(str1);
		if (str1[0] == '#') 
			break;
		gets(str2);
		for (i=0, len=strlen(str1); i<len; i++) {
			printf("%c %d\n", str1[i], count(str1[i], str2));
		}
	} while (1);
	return 0;
}