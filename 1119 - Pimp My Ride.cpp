/**
 * Author: Ashraful Islam Rafi
 * University: Leading University,Sylhet
 * url:   http://www.lightoj.com/volume_showproblem.php?problem=1119
 * problem id: 1119 - Pimp My Ride
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
#define Inf 1<<30
#define S_N 5000010
#define MST(a, tf) memset(a, tf, sizeof (a))
#define min(a,b) ((a)<(b))?(a):(b)
int n,cst[15][15],dp[1<<15],ans;
int bitmsk(int msk)
{
	int i,mn,p,now,cost;int rv=Inf;

	if(msk == 0) return 0;
	if(dp[msk]!=-1)return dp[msk];

    for(int c=0;c<n;c++)
        if(msk & 1<<c)
        {
           cost=0;  p=msk - (1<<c);
           for(int j=0;j<n;j++)

              if(msk & 1<<j)
                 cost += cst[c][j] ; //+ bitmsk(msk) ;

           rv=min(rv,cost + bitmsk(p));
        }
    return dp[msk]=rv;
}
int main()
{
	int c,i,j,t,casee=0;sf(t);
	while(t--)
	{
		sf(n);
		for(i=0;i<n;i++)
			for(j=0;j<n;j++)
				scanf("%d",&cst[i][j]);
		//MST(dp,-1);
		memset(dp,-1,sizeof(dp));
		ans=bitmsk(~((~0)<<n));
		//ans=bitmsk(n);
		cout<<cs<<ans<<endl;
	}
	return 0;
}
