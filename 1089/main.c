#include <stdio.h>
#include <string.h>

void strrev2(char *str)
{
    int i, j, len;
    len = strlen(str);
    for (i = 0, j=len-1; i < j; i++, j--) {
       len = str[i], str[i] = str[j], str[j] = len;
    }
}
int reverse(int num)
{
    char temp[6];
    int ret;

    sprintf(temp, "%d", num);
    strrev2(temp);
    sscanf(temp, "%d", &ret);
    return ret;
}

int main(int argc, char* argv[])
{
    int n, a, b, sum;
	freopen("input.txt", "r", stdin);

    scanf("%d", &n);
    while(n--) {
        scanf("%d%d", &a, &b);
        sum = a+b;
        if ((reverse(a) + reverse(b)) == reverse(sum)) {
            printf("%d\n", sum);
        } else {
            printf("NO\n");
        }
    }

	return 0;
}
