///ACCEPTED
///http://www.lightoj.com/volume_showproblem.php?problem=1019
#include<iostream>
#include<queue>
#include<cstring>
#include<cmath>
using namespace std;
int inf=1010;
int N,E, edge[110][110];

struct node
{
    int cost,vertex;
};

bool operator<(node a, node b)
{
    return a.cost>b.cost;
}


int dijkstra(int st, int en)
{
    bool visited[110];
    memset(visited, false, sizeof visited);
    priority_queue<node> pq;
    node temp;
    temp.vertex=st; temp.cost=0;
    pq.push(temp);

    while(!pq.empty())
    {
        node cur=pq.top(); pq.pop();
        if(visited[cur.vertex]) continue;
        visited[cur.vertex]=true;
        if(cur.vertex==en) return cur.cost;
        for(int i=1;i<=N;i++)
        {
            if(edge[cur.vertex][i]<1010)
            {
                node t;
                t.vertex=i;
                t.cost=cur.cost+edge[cur.vertex][i];
                if(!visited[i]) pq.push(t);

            }
        }
    }
    return -1;

}


int main()
{
    int t;cin>>t;
    int ca=0;
    while(t--)
    {
        cin>>N>>E;
       for(int i=1;i<=N;i++)
            for(int j=1;j<=N;j++)
                edge[i][j]=inf;

        for(int i=0;i<E;i++)
        {
            int u,v,c;
            cin>>u>>v>>c;

            edge[u][v]=edge[v][u]=min(c,edge[u][v]);
        }
        //int q;cin>>q;
       // for(int i=0;i<q;i++)
        //{
           // int s,e;
            //cin>>s>>e;
            cout<<"Case "<<++ca<<": ";
            int x=dijkstra(1,N);
            if(x==-1) cout<<"Impossible\n";
            else cout<<x<<endl;

        //}
    }

}
