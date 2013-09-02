#include <stdio.h>
#include <string.h>
int main(int argc, char* argv[])
{
	int num,record[11], i;
	freopen("input.txt", "r", stdin); 
	while(~scanf("%d", &num)) {
		memset(record,0,11*sizeof(int));
		for (i=1;record[num]++,i<20;i++) {
			scanf("%d",&num);
		}
		for (num=i=1;i<11;i++){
			if(record[i]>record[num]) num=i;
		}
		printf("%d\n", num);
	}
	return 0;
}