#include <stdio.h>

typedef struct{
	char str[16], a[10], b[10];
}r;
int big(char *a, char *b)
{
	while(*a&&*a++==*b++);
	return *(--a)-*(--b);
}
int main(int argc, char* argv[])
{
	int n, m, i, first, last;
	r record[1000];

	freopen("input.txt", "r", stdin); 
	scanf("%d", &n);
	while(n--){
		scanf("%d", &m);
		for (i=first=last=0; i<m; i++)	{
			scanf("%s%s%s", record[i].str, record[i].a, record[i].b);
			if (big(record[first].a, record[i].a)>0) first =i;
			if (big(record[i].b, record[last].b)>0) last =i;
		}
		printf("%s %s\n", record[first].str, record[last].str);
	}
	return 0;
}