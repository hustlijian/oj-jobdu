#include <stdio.h>

#define MAX 50
double stack[MAX];
int tail;
int main(){
  int a,i;
  char ch1,ch2;
  double result;
  freopen("input.txt", "r", stdin);
  while(scanf("%d%c",&a,&ch2)){
	  if (a==0 && ch2=='\n') break;
   tail=0;
   stack[++tail]=1.0*a;

   while((ch2!='\n')&&scanf("%c %d%c",&ch1,&a,&ch2)){
    if(ch1=='+'){
     stack[++tail]=1.0*a;
    }else if(ch1=='-'){
     stack[++tail]=-1.0*a;
    }else if(ch1=='*'){
     stack[tail]=stack[tail]*a;
    }else if(ch1=='/'){
     stack[tail]=stack[tail]/(double)a;
    }
  }

  for(i=1,result=0;i<=tail;i++)result+=stack[i];
  printf("%.2lf\n",result);
  }
return 0;
}
/*
#include <stdio.h>

  double a, b, c;
  char e, op2;
  
	int main()
	{
    while (1)
    {
	scanf("%lf%c", &b, &e);
	if (e != ' ')
	break;
	a = 0;
	while (e ==' ')
	{
	scanf("%c%lf%c", &op2, &c, &e);
	if (op2 == '*')
	b *= c;
	else if (op2 == '/')
	b /= c;
	else
	{
	a += b;
	b = (op2=='+' ? c : -c);
	}
	}
	printf("%.2lf\n", a + b);
    }
    return 0;
}
*/
/************************************************************************/
/* lijian                                                               */
/*
#include <stdio.h>

main(){
	int a,i,T;
	char ch1,ch2;
	double R,S[50];
	while(scanf("%d%c",&a,&ch2)){
		if(a==0&&ch2=='\n')break;
		T=0;
		S[++T]=a;
		while((ch2!='\n')&&scanf("%c %d%c",&ch1,&a,&ch2))
			if(ch1=='+')
				S[++T]=a;
			else if(ch1=='-')
				S[++T]=-1*a;
			else if(ch1=='*')
				S[T]=S[T]*a;
			else if(ch1=='/')
				S[T]=S[T]/a;
			for(i=1,R=0;i<=T;i++)R+=S[i];
			printf("%.2lf\n",R);
	}
}
*/
/*
main(){int a,i,T;char E,F;double R,S[50];while(scanf("%d%c",&a,&F)){if(a==0&&F==10)break;T=0;S[++T]=a;while((F!=10)&&scanf("%c %d%c",&E,&a,&F))if(E=='+')S[++T]=a;else if(E=='-')S[++T]=-a;else if(E=='*')S[T]=S[T]*a;else if(E=='/')S[T]=S[T]/a;for(i=R=0;i<T;i++)R+=S[i+1];printf("%.2lf\n",R);}}
*/
/************************************************************************/