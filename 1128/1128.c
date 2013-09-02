#include <stdio.h>

int main(int argc, char* argv[])
{
	int n,m,t,i;
	freopen("input.txt", "r", stdin); 
	while(~scanf("%d",&n)) {
		for(i=0,t=0; i<n; i++)
			scanf("%d",&m),t+=m;
		printf("%.2f\n", 1.0*t/n);
	}
	return 0;
}