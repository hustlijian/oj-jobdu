#include <stdio.h>

int main(int argc, char* argv[])
{
	double a, t;
	int i;
	freopen("input.txt", "r", stdin); 
	while(~scanf("%lf", &a)){
		for (i=1,t=a; i<12; i++)
			scanf("%lf", &a), t+=a;
		printf("$%.2lf\n", t/12);
	}
	return 0;
}