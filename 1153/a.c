#include <stdio.h>
#include <string.h>
char strA[101];
char stack[2][101];
int main(void)
{
    int i, k;
    while(scanf("%s",strA)!=EOF){
        for(i=k=0;strA[i];i++) {
            if(strA[i]=='(') {
                stack[0][k]=1;
                stack[1][k++]=i;
            }
            if(strA[i] == ')') {
                if(stack[0][k-1]==1)k--;
                else{
                    stack[0][k]=2;
                    stack[1][k++]=i;
                }
            }
        }//for
        printf("%s\n",strA);
        memset(strA,' ',101);
        for (i=0;i<k;i++)strA[stack[1][i]]=(stack[0][i]==1)?'$':'?';
        printf("%s\n",strA);
    }
	return 0;
}
