#include<stdio.h>
#include<string.h>
#include<ctype.h>
char S[201];
void D(){
    int i;
    for(i=0;S[i];i++)
        if (isupper(S[i]))
            S[i]=65+(S[i]-44)%26;
}
int main(){
    while(1){
        gets(S);
        if(!strcmp(S,"ENDOFINPUT"))break;
        gets(S);
        D();
        puts(S);
        gets(S);
    }
	return 0;
}
