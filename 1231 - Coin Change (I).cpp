/**
 * Author: Ashraful Islam Rafi
 * University: Leading University,Sylhet
 * url:   http://www.lightoj.com/volume_showproblem.php?problem=1231
 * problem id: 1231 - Coin Change (I)
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
#define S_N 5000010
#define MST(a, tf) memset(a, tf, sizeof (a))
#define pi acos(-1.0)
#define eps 1e-9
int mod=100000007;
int n,k;
int dp[1005][52];
int coin[210],value[211];
int no_of_ways(int sum,int index)
{
    if(index>n){ if(sum == k) return 1; return 0;}
    if(sum>k) return 0;
    if(sum == k) return 1;
    int &rec = dp[sum][index];
    if(rec != -1) return rec;
    //if(dp[sum][index] != -1) return dp[sum][index];
    int rv=0;

    for(int i=1;i<=value[index];i++)
    {
        if(sum + coin[index]*i <=k)
            rv += no_of_ways(sum + coin[index]*i, index+1) %mod;
        else break;
    }
    rv += no_of_ways(sum,index+1) %mod;
    rec = dp[sum][index];
    return rec = rv %mod;
    //return dp[sum][index]= rv %mod;
}
int main()
{

    int t;sf(t);int casee=0;
    while(t--)
    {
        MST(dp,-1);
        sf(n);sf(k);
        for(int i=1;i<=n;i++) sf(coin[i]);
        for(int j=1;j<=n;j++) sf(value[j]);

        int  ans = no_of_ways(0,1) %mod;
        printf("Case %d: %d\n",++casee,ans);
        //cout<<cs<<ans<<endl;
    }
}
/*
2
3 5
1 2 5 3 2 1
4 20
1 2 3 4 8 4 2 1


Case 1: 3
Case 2: 9
*/
