#include <stdio.h>
int main()
{
	int a, b, c, m, T, V;
	char str[3][12]={"zhi", "rui", "dun"};
	freopen("input.txt", "r", stdin); 
	while(~scanf("%d%d%d", &a, &b, &c)) {
		m=b>a?b>c?b:c:a>c?a:c;
		T = 2*m*m;
		V = a*a+b*b+c*c;
		printf("m:%d a:%d b:%d c:%d\n", m, a, b, c);
		if (T==V){
			printf("ֱ��������\n");
		} else if(T<V){
			printf("���������\n");
		} else printf("�۽�������\n");
	}
	return 0;
}
