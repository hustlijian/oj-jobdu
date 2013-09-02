#include <stdio.h>
int main(){
	double a, y;
	while(~scanf("%lf", &a)) {		
		if(a<2) y=2.5-a;
		else if(a<4) y=2-1.5*(a-3)*(a-3);
		else y=a/2-1.5; 
		printf("%.3lf\n",y);
	}
	return 0;
}