#include <stdio.h>
#include <string.h>

int main(int argc, char* argv[])
{
    int map[101], a, i, count;
	freopen("input.txt", "r", stdin);
    while (scanf("%d", &a)!=EOF) {
        memset(map, 0, sizeof(map));
        map[a] ++;
        for (i = 0; i < 9; i++) {
            scanf("%d", &a);
            map[a]++;
        }
        count = 0;
        for (i = 99; i > 0; ) {
            if (map[i]>0) {
                printf("%d",i);
                count ++;
                map[i]--;
                if (count == 10) {
                    printf("\n");
                } else {
                    printf(" ");
                }
            } 
            if (map[i] == 0) {
                i -= 2;
            }
        }
        for (i = 0; i < 101; ) {
            if (map[i]>0) {
                printf("%d",i);
                count ++;
                map[i]--;
                if (count == 10) {
                    printf("\n");
                } else {
                    printf(" ");
                }
            } 
            if (map[i] == 0) {
                i += 2;
            }
        }
    }

	return 0;
}
