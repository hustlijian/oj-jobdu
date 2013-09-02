#include <stdio.h>
#include <string.h>

char strA[101];
char stack[2][101];

int main(int argc, char* argv[])
{
    int i, k;
	freopen("input.txt", "r", stdin);
    while (scanf("%s", strA) != EOF) {
        for (i =k= 0; strA[i]; i++) {
            if (strA[i] == '(') {
                stack[0][k] = 1;
                stack[1][k++] = i;
            }
            if (strA[i] == ')') {
                if (stack[0][k-1]==1) {
                    k--;
                }else {
                    stack[0][k] = 2;
                    stack[1][k++] = i;
                }
            }
        }//for
        printf("%s\n", strA);
        memset(strA, ' ', strlen(strA));
        for (i = 0; i < k; i++) {
           strA[stack[1][i]] = (stack[0][i]==1)?'$':'?';
        }
        //strA[stack[1][i-1]+1] = '\0';
        printf("%s\n", strA);
    }
	return 0;
}
