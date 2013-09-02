#include <stdio.h>
#include <math.h>
int main(int argc, char* argv[])
{
	double x0,y0,z0,x1,y1,z1,r,s;

	freopen("input.txt", "r", stdin); 
	while(~scanf("%lf%lf%lf%lf%lf%lf",&x0,&y0,&z0,&x1,&y1,&z1)){
		r=sqrt((x0-x1)*(x0-x1)+(y0-y1)*(y0-y1)+(z0-z1)*(z0-z1));
		s=4*acos(-1)*r*r*r/3;
		printf("%.3lf %.3lf\n", r, s);
	}
	return 0;
}