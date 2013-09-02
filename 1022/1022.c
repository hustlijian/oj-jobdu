#include <stdio.h>
#include <string.h>
typedef struct {
	int flag, hour, second;
}ship;
int main(int argc, char* argv[])
{
	int num, hour, second, total_t, total_num;
	char c, str[5];
	ship elem[101];
	freopen("input.txt", "r", stdin); 
	do{
		memset(elem, 0, 101*sizeof(ship));
		total_num=total_t=0;
		while(1) {
			scanf("%d %c ", &num, &c);
			scanf("%s", str);
			hour=(str[0]-'0')*10+(str[1]-'0');
			second=(str[3]-'0')*10+(str[4]-'0');
			if(num<=0) break;
			if (c=='S') {
				elem[num].flag = 1;
				elem[num].hour = hour;
				elem[num].second = second;
			}
			if (c=='E'&&elem[num].flag==1) {
				elem[num].flag = 0;
				total_num++;
				total_t+=(hour-elem[num].hour)*60+(second-elem[num].second);
			}
		}
		if (num<0) break;
		printf("%d %d\n", total_num, total_num?(int)(0.5+1.0*total_t/total_num):0);
	}while(1);
	return 0;
}