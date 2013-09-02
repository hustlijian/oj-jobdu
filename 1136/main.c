#include <stdio.h>

int main(int argc, char* argv[])
{
    int n, x, y;
	freopen("input.txt", "r", stdin);
    scanf("%d", &n);
    while (n--) {
        scanf("%d %d", &x, &y);
        //printf("%d %d\n", x, y);
        if (x<0 || y<0) {
            printf("No Number\n");
            continue;
        }
        if (x == y) {
            printf("%d\n",(x/2)*4+(x%2));
        } else if (x == y+2) {
            printf("%d\n",(x/2)*4+(x%2)-2);
        } else {
            printf("No Number\n");
        }
    }

	return 0;
}
