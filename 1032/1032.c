#include <stdio.h>

int count(char c, char *str)
{
	int total = 0;
	int i=0;
	while(str[i] != '\0')
		if(str[i++] == c) 
			total++;
	return total;
}
int main(int argc, char* argv[])
{
	char str[101];
	int z, o, j;
	freopen("input.txt", "r", stdin); 
	while(gets(str), str[0]!='E') {
		z = count('Z', str);
		o = count('O', str);
		j = count('J', str);
		while(z||o||j) {
			if(z) putchar('Z'), z--;
			if(o) putchar('O'), o--;
			if(j) putchar('J'), j--;
		}
		putchar('\n');
	}
	return 0;
}