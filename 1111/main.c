#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(int argc, char *argv[])
{
    char s[1000],a[100],b[100];
    int i, j, slen;
    char c[100];

    freopen("input.txt", "r", stdin); 

    while(gets(s) != NULL)
    {
        gets(a);
        gets(b);
        slen=strlen(s);
        memset(c,0,sizeof(c));
        for (i = 0; i < slen; i++) {
            j=0;
            while(s[i]!=' '&&s[i]!='\0')
                c[j++]=s[i++];
            if(strcmp(c,a)==0)
            {
                if(s[i]!='\0')
                printf("%s ",b);
                else printf("%s",b);
            }
            else {
                if(s[i]!='\0')
                printf("%s ",c);
                else printf("%s",c);
            }
            memset(c,0,sizeof(c));
        }
        printf("\n");
    }
    return 0;
}
