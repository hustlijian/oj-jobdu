#include <stdio.h>
int num(char *str)
{
	int i, t, f;
	for (i=t=f=0; str[i];i++) {
		if (str[i]==',') continue;
		if (str[i]=='-'&&(f=1)) continue;
		t = t*10 + str[i]-'0';
	}
	if(f) t*=-1;
	return t;
}
int main(int argc, char* argv[])
{
	char str[20];
	int a, b;
	freopen("input.txt", "r", stdin); 
	while(~scanf("%s", str)) {
		a = num(str);
		scanf("%s", str);
		b = num(str);
		printf("%d\n", a+b);
	}
	return 0;
}