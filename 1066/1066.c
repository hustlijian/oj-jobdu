#include <stdio.h>
void sort(char *a){
	int i,j,k;
	for (i=0;a[i+1];i++) {
		k=a[i+1];
		for (j=i;a[j]>k&&j>0;j--) {
			a[j+1]=a[j];
		}
		a[j+1]=k;
	}
}
int main(int argc, char* argv[])
{
	char str[21];
	while(~scanf("%s", str)) {
		sort(str);
		puts(str);
	}
	return 0;
}

/*
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int compare(const void*a, const void*b)
{
return *(char*)a-*(char*)b;
}
int main(int argc, char* argv[])
{
char str[20];
freopen("input.txt", "r", stdin); 
while(~scanf("%s", str)) {
qsort(str,strlen(str), sizeof(char), compare);
printf("%s\n", str);
}
return 0;
}
*/
