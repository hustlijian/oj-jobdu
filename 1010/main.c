#include <stdio.h>
#include <string.h> 

char A[30];
char S[10][6]={"zero","one","two","three","four","five","six",
                "seven","eight","nine"};
int len[10]={4,3,3,5,4,4,3,5,5,4};
int k;

int getone()
{
    int a, i;
    a = 0;
    while (1) {
        for (i = 0; i < 10; i++) {
            if (!strncmp(&A[k],S[i],len[i])) {
                //printf("s[i]: %s\n", S[i]);
                //printf("A[k]: %s\n", &A[k]);
                //printf("k = %d %s\n", k,&A[k]);
                break;
            }
        }
        if (i>9) {
            break;
        }
        k += len[i]+1;
        a = a*10 + i;        
    }
    //printf("return %d\n", a);
    return a;
}
int main(int argc, char* argv[])
{
    int a, b;
    freopen("input.txt", "r", stdin);

    while (gets(A)) {
        //printf("%s\n", A);
        if (!strcmp(A, "zero + zero =")) {
            //printf("end!\n");
            break;
        }
        k = 0;
        a = getone();
        k += 2;
        b = getone();
        printf("%d\n", a+b);

    }
    return 0;
}
