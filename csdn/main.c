#include <stdio.h>
#include <string.h>
#include <time.h>
#define LEN 12

char W[LEN], X[LEN];
int total;

void count(int pos)
{
    int i=pos, j;
    while (W[i] != '\0') {
        if(W[i]=='?')
            break;
        i++;
    }
    if(W[i] == '\0'){ //end
        if(strcmp(W,X)>0) total++;
        //printf("%s %s\n", W, X);
        return ;
    }
    for (j=0; j<10; j++){
        W[i] = '0'+j;
        count(i+1);
        W[i] = '?';
    }

}
int main(int argc, char* argv[])
{
    freopen("input.txt", "r", stdin);
    double start, end;
    start = clock();
    while (~scanf("%s%s", W, X)) {
        //printf("%s \n%s\n", W, X);
        total =0;
        count(0);
        printf("%d\n", total);
    }

    end = clock();
    printf("%.3lf MS\n", (end-start)/1000);	
    return 0;
}
