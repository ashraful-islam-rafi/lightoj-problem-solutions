/**
 * Author: Ashraful Islam Rafi
 * University: Leading University,Sylhet
 * url:   http://www.lightoj.com/volume_showproblem.php?problem=1217
 * problem id: 1217 - Neighbor House (II)
 * complexity: 2nd level(DP)
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
#include"stdio.h"
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
#define S_N 1001
#define MST(a, tf) memset(a, tf, sizeof (a))
#define pi acos(-1.0)
#define eps 1e-9

//vector<int>v;
int arr[S_N];
int dp[S_N][S_N];
int recur(int ind,int last)
{
    if (ind >= last) return 0;
    int &rv = dp[ind][last];
    if (rv != -1) return rv;
    return rv = arr[ind] + max(recur(ind+2,last) , recur(ind+3,last));
}
int main()
{
    int t,casee=0;cin>>t;
    while(t--)
    {
        MST(dp,-1);
        int n;sf(n);
        for (int i=0;i<n;i++)
         {
             //int a;sf(a);v.push_back(a);
             sf(arr[i]);
         }
        int ans = max( max(recur(0,n-1),recur(1,n)),recur(2,n));
        printf("Case %d: %d\n",++casee,ans);
        //v.clear();
    }
}
/*int main()
{

    int t;sf(t); int casee=0;
    while(t--)
    {
      int sum = 0;  vector<int>v;
      int n;sf(n); v.push_back(0);
      for(int i=1;i<=n;i++)
      {
        int x;sf(x);
        v.push_back(x);   // cout<<v[i]<<endl;
        sum += v[i];
      } //cout<<sum<<endl;
      cout<<cs;
      if(n==2)  cout<<max(v[1],v[2]);
      else if(n==3)  cout<<max(v[1],max(v[2],v[3]));
      else
      {
          int fans=0;
          for(int i=1;i<=n;i++)
          {

              if(i==1)  fans = max(fans, sum- (v[i+1]+v[n]));
              else if(i==n)  fans = max(fans, sum - (v[i-1]+v[n]));
              else  fans = max(fans, sum - (v[i-1]+v[i+1]));
          }
          cout<<fans;
      }
      cout<<endl;
    }
}*/


/*
3
2
10 100
3
10 2 11
4
8 9 2 8


Case 1: 100
Case 2: 11
Case 3: 17
*/
