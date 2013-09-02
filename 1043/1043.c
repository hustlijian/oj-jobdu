#include <stdio.h>
#include <string.h>

int num[12]={31,28,31,30,31,30,31,31,30,31,30,31};
char mon[12][10]={"January", "February", "March", "April", \
"May", "June", "July", "August", "September", "October",\
"November", "December"};
char week[7][10] = {"Sunday","Monday", "Tuesday", "Wednesday", \
		"Thursday", "Friday", "Saturday"};
int isLeap(int y)
{
	return !(y%4) && y%100 || !(y%400);
}
int main(int argc, char* argv[])
{
	int d, y, i, e, m;
	char u[12];
	freopen("input.txt", "r", stdin); 
	while(~scanf("%d%s%d", &d, u, &y)) {
		e = (y-1)*365;
		for(i=1;i<y;i++) {
			if (isLeap(i)) {
				e++;
			}
		}
		for (i=0;strcmp(mon[i],u);i++);
		m=i;
		printf("%d %d %d\n", y, m+1, d);
		for (i=0;i<m;i++) {
			e+=num[i];
		}
		if (isLeap(y) && m>1) {
			e++;
		}
		e+=d;
		printf("%d: %s\n", e, week[e%7]);
	}
	return 0;
}