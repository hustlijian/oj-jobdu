#include <stdio.h>
#include <string.h>
typedef struct{
	char str[21];
	int total;
}grade;

int main(int argc, char* argv[])
{
	int n, m, f[11], g, i, j, m1, t, high, stu[1000];
	grade student[1000];

	freopen("input.txt", "r", stdin); 
	while(scanf("%d%d%d", &n, &m, &g), n) {
		for (i=0; i<m; i++)	{
			scanf("%d", &f[i+1]);
		}
		for (i=high=0; i<n; i++) {
			scanf("%s%d", &student[i].str, &m1);
			for (j=student[i].total=0; j<m1; j++) {
				scanf("%d", &t);
				student[i].total += f[t];
			}
			if (student[i].total>=g){
				stu[0] = i;
				for (j=high++; (j>=0)&&((student[stu[j]].total<student[i].total)||
					((student[stu[j]].total==student[i].total)&&
					strcmp(student[stu[j]].str, student[i].str)>0)); j--) {
					stu[j+1]=stu[j];
				}
				stu[j+1]=i;
			}
		}
		printf("%d\n", high);
		for (i=1; i<=high; i++) {
			printf("%s %d\n", student[stu[i]].str, student[stu[i]].total);
		}		
	}
	return 0;
}
/************************************************************************/
/*
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define S sizeof(N)
typedef struct{char n[21];int s;}N;
int c(const void*a,const void*b){N *x=(N*)a,*y=(N*)b;if(x->s==y->s)return strcmp(x->n,y->n);else return y->s-x->s;}
int main(){int n,m,g,i,j,t[10],u,v;N *r;while(scanf("%d",&n),n){scanf("%d%d",&m,&g);r=(N*)malloc(n*S);for(i=0;i<m;++i)scanf("%d",t+i);for(j=i=0;i<n;++i){scanf("%s%d",r[j].n,&m);u=0;while(m--){scanf("%d",&v);u+=t[v-1];}if(u>=g)r[j++].s=u;}qsort(r,j,S,c);printf("%d\n",j);for(i=0;i<j;++i)printf("%s %d\n",r[i].n,r[i].s);free(r);}}
*/
/**************************************************************
    Problem: 1014
    User: kingwolfofsky
    Language: C
    Result: Accepted
    Time:10 ms
    Memory:908 kb
****************************************************************/
/************************************************************************/