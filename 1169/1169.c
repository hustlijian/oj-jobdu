#include <stdio.h>

int main(int argc, char* argv[])
{
	int n,a,t,i;
	freopen("input.txt", "r", stdin); 
	while(~scanf("%d", &n)) {
		for (i=0,t=0;i<n;i++) {
			scanf("%d", &a);
			a%2?t++:t--;
		}
		printf("%s\n", t<0?"NO":"YES");
	}
	return 0;
}