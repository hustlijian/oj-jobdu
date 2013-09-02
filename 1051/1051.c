#include <stdio.h>
#include <string.h>
int main(int argc, char* argv[])
{
	int a, n, i;
	int num[101];
	freopen("input.txt", "r", stdin); 
	while(~scanf("%d%d", &a, &n)) {
		memset(num, 0, 101*sizeof(int));
		for (i=0;i<n;i++){
			num[i]+=(n-i)*a;
			num[i+1]=num[i]/10;
			num[i]%=10;
		}
		for (i=n;!num[i]&&i>0;i--);
		for (;i>=0;i--){
			printf("%d", num[i]);
		}
		printf("\n");
	}
	return 0;
}