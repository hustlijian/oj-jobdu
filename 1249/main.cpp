#include<iostream>
#include<queue>
#include<iostream>
#include<stdlib.h>
#include<time.h>
#include<stdio.h>
#include <string.h>
using namespace std;
  
#define MAXN 102
#define _max(a,b) ((a)>(b)?(a):(b))
struct Edge{
       int from,to,len;
       int next;
}edge[MAXN*MAXN];
  
int list[MAXN];
int ind;
  
void init(){memset(list,-1,sizeof(list));ind=0;}
void insert(int a,int b,int l){
     edge[ind].from=a;
     edge[ind].to=b;
     edge[ind].len=l;
     edge[ind].next=list[a];
     list[a]=ind++;
       
     edge[ind].from=b;
     edge[ind].to=a;
     edge[ind].len=l;
     edge[ind].next=list[b];
     list[b]=ind++;
}
  
int col[MAXN];
int used[MAXN][MAXN];
int maxl[MAXN][MAXN];
  
struct node{
    int from,to,len;
    bool operator<(const node& x) const{
        return x.len<len;
    }
};
  priority_queue<node> pq;
    
int Prim(int n){
    
    node u,v;
    int ret=0;
    memset(col,0,sizeof(col));
    memset(used,0,sizeof(used));
    u.from=1;
    u.to=1;
    u.len=0;
    pq.push(u);
    int i,p;
    while(!pq.empty()){
        while((!pq.empty())&&col[pq.top().to]==1) pq.pop();
        if(pq.empty()) break;
        u=pq.top();
        pq.pop();
        col[u.to]=1;
        ret+=u.len;
        if(u.from!=u.to){
           used[u.from][u.to]=used[u.to][u.from]=1;
           maxl[u.from][u.to]=maxl[u.to][u.from]=u.len;
           for(i=1;i<=n;i++)
             if(col[i]&&i!=u.from){
                maxl[i][u.to]=_max(maxl[i][u.from],u.len);
                maxl[u.to][i]=maxl[i][u.to];
             }
        }
        for(p=list[u.to];p!=-1;p=edge[p].next){
            if(col[edge[p].to]==0){
                v.from=u.to;
                v.to=edge[p].to;
                v.len=edge[p].len;
                pq.push(v);
            }
        }
    }
    return ret;
}
  
int process(int n,int m,int _min){
    int i;
    int from,to,len;
    int ret=-1;
    for(i=0;i<2*m;i+=2){
        from=edge[i].from;
        to=edge[i].to;
        len=edge[i].len;
        if(used[from][to]==0){
           if(ret==-1||_min-maxl[from][to]+len<ret)
              ret=_min-maxl[from][to]+len;
        }
    }
    return ret;
}
  
int main()
{
    freopen("input.txt","r",stdin);
    //freopen("test.out","w",stdout);
    double start,end;
    //start=clock();
    int t;
    scanf("%d",&t);
    while(t--){
        int n,m;
        scanf("%d%d",&n,&m);
        int res,tmp;
        int i;
        int from,to,len;
        init();
        for(i=0;i<m;i++){
           scanf("%d%d%d",&from,&to,&len);
           insert(from,to,len);
        }
        res=Prim(n);
        if(res==0) tmp=-1;
        else
         tmp=process(n,m,res);
        printf("%d\n",tmp);
    }
   //end=clock();
//    printf("%.3lf\n",(end-start)/1000);
}
  
/**************************************************************
    Problem: 1249
    User: 阳仔
    Language: C++
    Result: Accepted
    Time:24 ms
    Memory:1712 kb
****************************************************************/
 
/**************************************************************
    Problem: 1249
    User: 浩帆
    Language: C++
    Result: Accepted
    Time:10 ms
    Memory:1960 kb
****************************************************************/
