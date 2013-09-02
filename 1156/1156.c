#include <stdio.h>
#include <string.h>

int main(int argc, char* argv[])
{
	int s[200], r[200], m,n,i,a;
	freopen("input.txt", "r", stdin); 
	while(~scanf("%d%d", &n, &m)) {
		memset(s,0,200*sizeof(int));
		memset(r,0,200*sizeof(int));
		for (i=0; i<n; i++) {
			scanf("%d", &a);
			r[i] = a;
			s[a]++;
		}
		for (i=0; i<n; i++) {
			if (s[r[i]]>1)
				printf("%d\n",s[r[i]]-1);
			else
				printf("BeiJu\n");
		}
	}
	return 0;
}