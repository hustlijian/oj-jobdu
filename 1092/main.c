#include <stdio.h>

int map[31];
void initMap(void)
{
    int i;
    map[0] = 0;
    map[1] = 1;
    for (i = 2; i < 31; i++) {
        map[i] = map[i-1] + map[i-2];
    }
}

int main(int argc, char* argv[])
{
    int n;
	freopen("input.txt", "r", stdin);
    initMap();
    while (scanf("%d", &n) != EOF) {
        printf("%d\n", map[n]);
    }

	return 0;
}
