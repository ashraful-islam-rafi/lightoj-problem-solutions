/**
 * Author: Ashraful Islam Rafi
 * University: Leading University,Sylhet
 * url:   http://www.lightoj.com/volume_showproblem.php?problem=1174
 * problem id: 1174 - Commandos
 * complexity: 2nd level(bfs,dfs,floyed,dijkstra)
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
#define size_N 10000000
#define MST(a, tf) memset(a, tf, sizeof (a))

int N,E;
int edge[110][110];
int dist[110][110];
int floyed(int st,int en)
{
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
        {
             dist[i][j]=edge[i][j];
           if(!edge[i][j] && (i!=j))
              dist[i][j]=Inf;
        }
    }

    for(int i=0;i<N;i++)
        for(int j=0;j<N;j++)
            for(int k=0;k<N;k++)
               dist[j][k]=min(dist[j][k],dist[j][i]+ dist[i][k]);

    for(int i=0;i<N;i++,clog<<endl)
        for(int j=0;j<N;j++)
           clog<<dist[i][j]<<" ";


    int ans=-1;
    for(int i=0;i<N;i++)
       ans= max(ans,dist[st][i] + dist[i][en]);
    return ans;

}

int main()
{
   int t;sf(t);int casee=0;
   while(t--)
   {
        sNE(N,E);MST(edge,0);
        for(int i=0;i<E;i++)
        {
            int u,v; sf(u);sf(v);
            edge[u][v]=edge[v][u]=1;
        }
        int start,end; sf(start);sf(end);
        cout<<cs<<floyed(start,end)<<endl;
   }
}

///--test casee--///
/**
3

4
3
0 1
2 1
1 3
0 3

2
1
0 1
1 0

5
6
0 1
0 2
0 3
1 4
2 4
3 4
0 4

Case 1: 4
Case 2: 1
Case 2: 2
**/