/*
 *Author: Ashraful Islam Rafi
 * University: Leading University,Sylhet
 * url:   http://lightoj.com/practice_contest_showproblem.php?contest_id=104&problem=G
 * problem id: 61180 - Array Queries
 * complexity: 2nd level
 * site: Lightoj.com
*/
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

#define cs "Case "<<++casee<<": "
#define csE "Case "<<++casee<<":\n"
//cout<<cs<<ans<<endl;
using namespace std;
int arr[1000010];int tree[1000010];
int n,m,q;

void update(int node,int qs,int qe,int us,int ue,int v)
{
    if(us>qe || qs>ue) return;
    if(qs>=us && qe<=ue) {tree[node]=v;return;}
    int srt=(qe+qs)/2;
    update(2*node,qs,srt,us,ue,v);
    update(2*node+1,srt+1,qe,us,ue,v);
    int l=2*node;
    int r=2*node+1;
    if(tree[l]<tree[r]) tree[node]=tree[l];
    else tree[node]=tree[r];
}
int query(int node,int qs,int qe,int us,int ue)
{
    if(us>qe || qs>ue) return 1000000000;
    if(qs>=us && qe<=ue) {return tree[node];}//arr[node];}
    int srt=(qs+qe)/2;
    int a=query(2*node,qs,srt,us,ue);
    int b=query(2*node+1,srt+1,qe,us,ue);
    if(a>b) return b;
    else return a;
}
int main()
{
  /*  int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++) update(1,0,n-1,i,i,arr[i]);
    int ok=query(1,0,n-1,0,n-1);
*/

    int t;cin>>t;
    int casee=0;
    while(t--)
    {
       // int n,q;
        cin>>n>>q;
        for(int i=0;i<n;i++)
        {
           // int temp;
            //cin>>temp;
            cin>>arr[i]; update(1,0,n-1,i,i,arr[i]);

        }
       // cout<<"Case "<<++casee<<":\n";
        cout<<csE;
        //for(int i=0;i<n;i++)
        for(int j=1;j<=q;j++)
        {
            int start,end;
            cin>>start>>end;
            int ok=query(1,0,n-1,start-1,end-1);
            //ok=update(1,0,n-1,start,end,arr[i]);
            cout<<ok<<endl;
        }
    }
}
///---test casae---///
/*
2

5 3
78 1 22 12 3
1 2
3 5
4 4

1 1
10
1 1
*/
