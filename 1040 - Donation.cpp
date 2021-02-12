/**
 * Author: Ashraful Islam Rafi
 * University: Leading University,Sylhet
 * url:   http://www.lightoj.com/volume_showproblem.php?problem=1040
 * problem id: 1040 - Donation
 * complexity: MST(graph theory)-2nd level
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

int edge[111][111];
int N;
bool visited[111];
struct node
{
    int cost,vertex;
};

bool operator<(node a,node b)
{
    return a.cost>b.cost;
}

int mst()
{

    memset(visited ,false,sizeof visited);
    node temp;
    temp.cost=0;
    temp.vertex=0;
    priority_queue <node> pq;
    pq.push(temp);
    int ans=0;
    while(!pq.empty())
    {
        node cur=pq.top();
        pq.pop();
        if(visited[cur.vertex]) continue;
        visited[cur.vertex]=true;
        ans=ans+cur.cost;
        for(int i=0;i<N;i++)
            if(edge[cur.vertex][i]>0 && edge[cur.vertex][i]<111)
            {
                node t;
                t.cost=edge[cur.vertex][i];
                t.vertex=i;
                if(visited[i]==false) pq.push(t);
            }
    }
    return ans;
}

int main()
{
    int t; scanf("%d", &t);
    int casee=0;
    while(t--)
    {
        cin>>N;
        memset(edge,111,sizeof edge);
        int total_sum=0;

        for(int i=0;i<N;i++)
        {
            for(int j=0;j<N;j++)
            {
                int a; cin>>a;
                total_sum=total_sum+a;
                if(a>0)
                {
                    int k= min(edge[i][j], a);
                    edge[i][j]=edge[j][i]=k;
                }
            }
        }
        int min_path=mst();
        int count=0;
        for(int i=0;i<N;i++)
         if(visited[i]) count++;

        cout<<cs;
        if(count== N) cout<<total_sum-min_path<<endl;
        else cout<<"-1"<<endl;
    }
}
///--test case---//
/**
3
2
27 26
1 52

4
0 10 10 0
0 0 1 1
0 0 0 2
0 0 0 0

4
0 1 0 0
1 0 0 0
0 0 0 1
0 0 1 0
**/
