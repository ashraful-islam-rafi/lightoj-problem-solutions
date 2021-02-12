/**
 * Author: Ashraful Islam Rafi
 * University: Leading University,Sylhet
 * url:   http://www.lightoj.com/volume_showproblem.php?problem=1002
 * problem id: 1002 - Country Roads
 * complexity: 2nd level(mst)
 * site: Lightoj.com
**/
#include"map"
#include"set"
#include"queue"
#include"cmath"
#include"stack"
#include"ctype.h"
#include"cstdio"
#include"vector"
#include"cstdio"
#include"cstring"
#include"cstdlib"
#include"string.h"
#include"iostream"
#include"algorithm"
using namespace std;
#define cs "Case "<<++casee<<": "
#define csE "Case "<<++casee<<":\n"
#define sf(t) scanf("%d",&t)
#define sNE(n,e) scanf("%d %d",&N,&E)
#define Inf 1000000000
#define S_N 5000010
#define MST(a, tf) memset(a, tf, sizeof (a))
int N,E;
int edge[505][16010];
int arr[20010];
struct node
{
    int cost,vertex,mxcost;
};
bool operator<(node a,node b)
{
    return a.cost>b.cost;
}
void mst(int st)
{
    bool visited[505];
    MST(visited,false);
    node temp;
    temp.cost=0; temp.vertex=st; temp.mxcost=0;
    priority_queue<node>pq;
    pq.push(temp);
    int ans=0;
    while(!pq.empty())
    {
        node cur=pq.top(); pq.pop();
        if(visited[cur.vertex])  continue;
        visited[cur.vertex]=true;
        ///ans+=cur.mxcost;
        arr[cur.vertex]=cur.mxcost;
        for(int i=0;i<N;i++)
        {
            if(edge[cur.vertex][i]>=0 && edge[cur.vertex][i]<20005 )
            {
                /**node t;
                t.cost=edge[cur.vertex][i];
                t.vertex=i;
                if(visited[i]==false) pq.push(t);*/
                node t;
                t.cost=edge[cur.vertex][i];
                t.mxcost=max(cur.mxcost,edge[cur.vertex][i]);
                t.vertex=i;
                if(visited[i]==false) pq.push(t);
            }
        }
    }
   // cout<<csE;
    for(int i=0;i<N;i++)
    {
      if(arr[i]!=-1) printf("%d\n",arr[i]);
      else  printf("Impossible\n");
    }
}
int main()
{
  int t; sf(t);int casee=0;
  while(t--)
  {
          sNE(N,E); MST(arr,-1); MST(edge,20010);
          for(int j=0;j<E;j++)
          {
              int u,v,c; sf(u);sf(v);sf(c);
              c=min(edge[u][v],c);
              edge[u][v]=edge[v][u]=c;
          }
      int start;sf(start);  cout<<csE;
      mst(start);
  }
}



///---test case--///
/**
2


5 6
0 1 5
0 1 4
2 1 3
3 0 7
3 4 6
3 1 8
1


5 4
0 1 5
0 1 4
2 1 3
3 4 7
1


Case 1:
4
0
3
7
7

Case 2:
4
0
3
Impossible
Impossible
**/
