#include <stdio.h>

int main(int argc, char* argv[])
{
	int a, b, i;
	freopen("input.txt", "r", stdin); 
	while(~scanf("%d%d", &a, &b)) {
		if(a<b){
			i=a,a=b,b=i;
		}
		while(a%b) {
			i=a,a=b, b=i%b;
		}
		printf("%d\n",b);
	}
	return 0;
}