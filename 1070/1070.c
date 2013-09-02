#include <stdio.h>

int num[12]={31,28,31,30,31,30,31,31,30,31,30,31};
int isLeap(int y)
{
	return !(y%4) && y%100 || !(y%400);
}
int main(int argc, char* argv[])
{
	int y, m, d, e, i;
	freopen("input.txt", "r", stdin); 
	while(~scanf("%d%d%d", &y, &m, &d)) {
		for (i=e=0;i<m-1;i++) e+=num[i];
		if (isLeap(y)&&m>2)e++;
		printf("%d\n", e+d);
	}
	return 0;
}