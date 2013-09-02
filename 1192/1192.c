#include <stdio.h>
main(){
	char s[1001];
	int i,j;
	freopen("input.txt", "r", stdin);
	while(~scanf("%s",s)){
		for(i=0,j=strlen(s)-1;i<j;i++,j--)
			if (s[i]!=s[j]) break;
		printf("%s\n",i>=j?"Yes!":"No!");
	}
}