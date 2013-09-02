#include <stdio.h>
#include <string.h>
C(int n,char *N){
	while(n>1){
		if(n%2)n=(n*3 + 1)/2;
		else n /= 2;
		if(n<1001)N[n]=1;
	}
}
main(){
	int i,j,n,a[500];
	char N[1001];
	while(scanf("%d",&n),n) {
		memset(N,0,1001);
		for (i=0;i<n;i++){
			scanf("%d",&a[i]);
			C(a[i],N);
		}
		for(j=0;j<n;j++)if(!N[a[j]])break;
		for(i=n-1;i>j;i--)
			if(!N[a[i]])printf("%d ",a[i]);
		printf("%d\n", a[j]);
	}
}