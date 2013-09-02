#include <stdio.h>
#include <string.h>
void tree(char *a, char *b, int n)
{
	int i;
	if (n<1) return;
	for (i=0;i<n;i++){
		if (b[i]==a[0]){
			break;
		}
	}
	tree(a+1, b, i);
	tree(a+i+1, b+i+1,n-i-1);
	putchar(a[0]);
}
int main(int argc, char* argv[])
{
	char pre[100], in[100];
	int t;
	freopen("input.txt", "r", stdin); 
	while(~scanf("%s", pre)) {
		scanf("%s", in);
		t = strlen(pre);
		tree(pre,in,t);
		printf("\n");
	}
	return 0;
}