#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

int arr[128];
int flag[128];
int ncase;

char str1[20];
int len;
char str2[20];
char str3[30];


int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
    #endif // ONLINE_JUDGE

    scanf("%d",&ncase);
    while(ncase--)
    {
        memset(arr,0,sizeof(arr));
        memset(flag,0,sizeof(flag));
        int ncount=0;
        for(int i=0;i<3;i++)
        {
            scanf("%s",str1);
            scanf("%s",str2);
            scanf("%s",str3);
            len=strlen(str1);

            if(strcmp(str3,"even")==0)
            {
                for(int j=0;j<len;j++)
                    arr[str1[j]]--;

                for(int j=0;j<len;j++)
                    arr[str2[j]]--;
            }
            else
            {
                ncount++;
                int tmp;
                if(strcmp(str3,"up")==0)
                    tmp=1;
                else
                    tmp=-1;

                for(int j=0;j<len;j++)
                {
                    arr[str1[j]]++;
                    flag[str1[j]]=1*tmp;
                }
                for(int j=0;j<len;j++)
                {
                    arr[str2[j]]++;
                    flag[str2[j]]=-1*tmp;
                }
            }
        }

        for(int i='A';i<='L';i++)
        {
            if(arr[i]==ncount)
            {
                if(flag[i]==1)
                    printf("%c is the counterfeit coin and it is heavy.\n",i);
                else
                    printf("%c is the counterfeit coin and it is light.\n",i);
            }
        }
    }

    return 0;
}
