#include"stack"
#include"iostream"
#include<stdio.h>
#include"algorithm"
#include"vector"
#include"cstdio"
#include"cstring"
#include"string.h"
#include"cstdlib"
#include"map"
#include"set"
#include"queue"
#include"cmath"
#include"ctype.h"

using namespace std;
int n,m;
int edge[1010][1010];
int place[1010];

int bfs(int st)
{
    bool point[1010];
    memset(point,false,sizeof point);
    queue<int>q; q.push(st);

    while(!q.empty())
    {
       int cur=q.front(); q.pop();
       if(point[cur]==true) continue;
       point[cur]=true;
       place[cur]++;

       for(int i=1;i<=n;i++)
       {
           if(edge[cur][i]==1) q.push(i);
       }
    }
    return point[st];
}


int main()
{
    int t;cin>>t;int casee=0;
    while(t--)
    {

        int k;cin>>k>>n>>m;
        vector<int>v;
        bool visited[1010];

         memset(place,0,sizeof place);
         memset(visited,false,sizeof visited);
         memset(edge,-1,sizeof edge);
        //while(k--)
        for(int i=0;i<k;i++)
        {
             int people;
             cin>>people; v.push_back(people);
             visited[people]=true;
        }
        for(int i=0;i<m;i++)
        {
            int a,b;cin>>a>>b;
            edge[a][b]=1;
        }

        int ans=0;
        for(int i=0;i<k;i++) bfs(v[i]);

        for(int i=1;i<=n;i++)
          if(place[i]==k) ans++;
        cout<<"Case "<<++casee<<": "<<ans<<endl;
    }
}
