#include <stdio.h>
#include <string.h>

int main(int argc, char* argv[])
{
    int t, i, j, A[1000000], B[1000000], a, b, c, d, lena, lenb, len;
	freopen("input.txt", "r", stdin);
    scanf("%d", &t);

    while (t--) {
       scanf("%d %d", &lena, &lenb);
       for (i = 0; i < lena; i++) {
           scanf("%d", &A[i]);
       }
       for (i = 0; i < lenb; i++) {
           scanf("%d", &B[i]);
       }
       scanf("%d %d %d %d", &a, &b, &c, &d);
       if (a>b) {
           i=a,a=b,b=i;
       }
       if (c>d) {
           i=c,c=d,d=i;
       }
       for (i = 0; i <= (b-a); i++) {
           A[i] = A[i+a-1];
       }
       for (j=0; j <= (d-c); i++,j++) {
           A[i] = B[j+c-1];
       }
       len = d+b-c-a+2;
       /*
       memset(B, 0, sizeof(int)*1000000);
       for (i = 0; i < len; i++) {
          // printf("%d ",A[i]);
          B[A[i]] = 1;
       }
       for (i=j = 0; i<1000000; i++) {
           if (B[i] == 1) {
               j++;
           }
           if (j == (len-1)/2) {
               break;
           }
       }
       */
       printf("%d\n", A[(len-1)/2]);
    }

	return 0;
}
