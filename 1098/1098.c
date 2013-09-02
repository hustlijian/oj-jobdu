#include <stdio.h>

int main(int argc, char* argv[])
{
	char s[1000],*p;
	int c[26], i;
	freopen("input.txt", "r", stdin); 
	while(~scanf("%s",s)){
		for(i=0;i<26;i++) c[i]=0;
		for (p=s; *p; p++)
			if(*p<='Z' && *p>='A') c[*p-'A']++;
		for(i=0; i<26; i++)
			printf("%c:%d\n",'A'+i,c[i]);
	}
	return 0;
}