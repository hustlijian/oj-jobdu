#include <stdio.h>
#include <string.h>
int main(int argc, char* argv[])
{
	int n,i;
	char a[2001], b[1001];
	freopen("input.txt", "r", stdin); 
	memset(a,' ',2000);
	memset(b,'*',1000);
	a[2000]=b[1000]='\0';
	while(~scanf("%d", &n)) {
		for (i=0;i<n;i++){
			printf("%s",&a[2*(1000-n+i+1)]);
			printf("%s\n",&b[1000-n-2*i]);
		}
	}
	return 0;
}
/*
#include <stdio.h>

int main(int argc, char* argv[])
{
	int n, i, j;
	freopen("input.txt", "r", stdin); 
	while(~scanf("%d", &n)){
		for (i=0;i<n;i++) {
			for (j=0;j<2*(n-i-1);j++){
				putchar(' ');
			}
			for (j=0;j<n+2*i;j++){
				putchar('*');
			}
			putchar('\n');
		}
	}
	return 0;
}
*/