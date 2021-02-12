/**
 * Author: Ashraful Islam Rafi
 * University: Leading University,Sylhet
 * url:   http://www.lightoj.com/volume_showproblem.php?problem=1066
 * problem id: 1066 - Gathering Food
 * complexity: graph theory
 * site: Lightoj.com
**/
#include "iostream"
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

int n;
char grid[15][15];
char ch;
struct node
{
    int x,y,cost;
};
int dx[]={-1,0,1,0};
int dy[]={0,1,0,-1};
int bfs(int sx,int sy, int ex, int ey)
{
    bool visited[15][15];
    memset(visited,false,sizeof visited);
  //  cout<<sx<<' '<<sy<<' '<<ex<<' '<<ey<<endl;
    node temp;
    temp.x=sx;temp.y=sy;temp.cost=0;
     queue<node>q;q.push(temp);
    char now='A';
    while(!q.empty())
    {
        node cur=q.front();q.pop();
        if(cur.x<0 || cur.x>=n || cur.y<0 || cur.y>=n) continue;
        if(visited[cur.x][cur.y]) continue;
        visited[cur.x][cur.y]=true;
        if(grid[cur.x][cur.y]=='#') continue;

        if(grid[cur.x][cur.y]>='A' && grid[cur.x][cur.y]<='Z')
            if(grid[cur.x][cur.y]>now+1) continue;
        if(cur.x==ex && cur.y==ey) return cur.cost;
        //cout<<cur.x<<' '<<cur.y<<endl;
        if(grid[cur.x][cur.y]==now+1)
        {
            memset(visited,false,sizeof visited);
            while(!q.empty()) q.pop();
            temp.x=cur.x;
            temp.y=cur.y;
            temp.cost=cur.cost;
            q.push(temp);
            now=grid[cur.x][cur.y]; //now=now+1;
        }

        for(int i=0;i<4;i++)
        {
            temp.x=cur.x+dx[i];
            temp.y=cur.y+dy[i];
            temp.cost=cur.cost+1;
            q.push(temp);
        }

    }
    return -3;
}
int main()
{
    int t;cin>>t;
    int casee=0;
    while(t--)
    {
        cin>>n;
        int sx,sy=0;int ex=0;int ey=0;
        ch='A';
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>grid[i][j];
                if(grid[i][j]>='A' && grid[i][j]<='Z')
                {
                   if(grid[i][j]=='A')
                   {
                    sx=i;sy=j;
                   }
                   if(ch<=grid[i][j])
                   {
                       ex=i;ey=j;
                       ch=grid[i][j];
                   }
                }

            }
        }
        //cout<<sx<<' '<<sy<<' '<<ex<<' '<<ey<<endl;
        int ans=bfs(sx,sy,ex,ey);
        if(ans==-3) cout<<"Case "<<++casee<<": "<<"Impossible"<<endl;
        else cout<<"Case "<<++casee<<": "<<ans<<endl;
    }
}
