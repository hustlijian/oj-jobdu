#include <stdio.h>

int main(int argc, char* argv[])
{
    int stack[10001], tail, n, i;
    char c;
	freopen("input.txt", "r", stdin);

    while (scanf("%d", &n), n) {
        for (tail=i=0; i < n; i++) {
            scanf("%c", &c);
            switch (c) {
                case 'P':
                    scanf("%d", &stack[tail++]);
                    break;
                case 'O':
                    if (tail > 0) {
                        tail --;
                    }
                    break;
                case 'A':
                    if (tail) {
                        printf("%d\n", stack[tail-1]);
                    } else {
                        printf("E\n");
                    }
                    break;
                default:
                    i--;
                    break;
            }
        }
        printf("\n");
    }

	return 0;
}
