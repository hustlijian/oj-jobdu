#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct {
	char name[101];
	int age;
	int grade;
}student;

int compare(const void *a, const void *b)
{
	student *p, *q;
	p = (student *)a;
	q = (student *)b;
	if (p->grade==q->grade) {
		if (!strcmp(p->name,q->name)){
			return p->age - q->age;
		}
		return strcmp(p->name, q->name);
	}
	return p->grade - q->grade;
}
int main(int argc, char* argv[])
{
	int n, i;
	student p[1000];
	freopen("input.txt", "r", stdin); 
	while(~scanf("%d", &n)) {
		for (i=0;i<n;i++){
			scanf("%s%d%d", p[i].name,&p[i].age, &p[i].grade);
		}
		qsort(p,n,sizeof(student), compare);
		for (i=0;i<n;i++){
			printf("%s %d %d\n", p[i].name,p[i].age, p[i].grade);
		}
	}
	return 0;
}