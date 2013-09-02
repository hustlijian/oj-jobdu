#include <stdio.h>

int main(int argc, char* argv[])
{
	int n=1 ,i, total;
	while(++n <= 60) {
		total = 0;
		for (i=1; i<n; i++)	{
			if(!(n%i)) total += i;
		}
		if (total > n)
		{
			printf("%d ", n);
		}
	}
	return 0;
}