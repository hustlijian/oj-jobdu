#include <stdio.h>
#include <math.h>

int main(int argc, char* argv[])
{
	int p, t, g1, g2, g3, gj, g12, g13,g23;
	double g;
	freopen("input.txt", "r", stdin); 
	while(~scanf("%d%d%d%d%d%d",&p,&t,&g1,&g2,&g3,&gj)) {
		g12 = abs(g1-g2);
		if (g12<=t) g = (g1+g2)/2.0;
		else {
			g13=abs(g1-g3);
			g23=abs(g2-g3);
			if (g13<=t && g23>t) {
				g = (g1+g3)/2.0;
			} else if (g23<=t && g13>t)	{
				g = (g2+g3)/2.0;
			} else if (g13<=t && g23<=3)
			{
				g = g1>g2?g1>g3?g1:g3:g2>g3?g2:g3;
			} else g = gj;
		}
		printf("%.1lf\n", g);
	}
	return 0;
}