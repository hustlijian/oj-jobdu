#include <stdio.h>
int map[100];

int not7(int num)
{
    char str[20];
    int i;
    if (num % 7 == 0) {
        return 0;
    }
    sprintf(str, "%d", num);
    for (i = 0; str[i]; i++) {
        if (str[i] == '7') {
            return 0;
        }
    }
    return 1;
}
void init()
{
    int i, t;
    for (i =t= 0; i < 100; i++) {
        if (not7(i)) {
            t += i*i;
        } 
        map[i] = t;
    }
}
int main(int argc, char* argv[])
{
    int n;
	freopen("input.txt", "r", stdin);
    init();
    while (scanf("%d", &n)!=EOF) {
        //printf("%d\n",n);
        printf("%d\n", map[n]);
    }

	return 0;
}
