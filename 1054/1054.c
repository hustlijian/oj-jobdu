#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int compare(const void *a, const void *b)
{
	return  *(char*)a-*(char*)b;
}
int main(int argc, char* argv[])
{
	char str[201];
	freopen("input.txt", "r", stdin); 
	while(~scanf("%s", str)) {
		qsort(str,strlen(str), sizeof(char), compare);
		printf("%s\n", str);
	}
	return 0;
}