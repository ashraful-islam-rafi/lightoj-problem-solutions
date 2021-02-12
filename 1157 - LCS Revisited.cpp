/**
 * Author: Ashraful Islam Rafi
 * University: Leading University,Sylhet
 * url:   http://www.lightoj.com/volume_showproblem.php?problem=1157
 * problem id: 1157 - LCS Revisited 
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
#define mod 1000007
int MOD(int x){ while(x<0) x+=mod; return x%mod; }
//int cache[1001][1001];
int dp[1011][1011],lcs[1011][1011];
string line1,line2;

int lcs_revisited(int m,int n)
{
    for(int i=0;i<=m;i++)
    {
        for(int j=0;j<=n;j++)
        {
            if(i==0 || j==0)
            {
                dp[i][j] = 1;
                lcs[i][j] = 0;
            }
            else
            {
                if(dp[i][j]=0,line1[i-1] == line2[j-1])
                {
                    dp[i][j] = dp[i-1][j-1] ;
                    lcs[i][j] = lcs[i-1][j-1] + 1;
                }
                else
                {
                    lcs[i][j] = max(lcs[i-1][j],lcs[i][j-1]) ;

                    if(lcs[i-1][j] == lcs[i][j])  dp[i][j] += dp[i-1][j]; dp[i][j] = MOD(dp[i][j]);
                    if(lcs[i][j-1] == lcs[i][j])   dp[i][j] += dp[i][j-1]; dp[i][j] = MOD(dp[i][j]);
                    if(lcs[i-1][j-1] == lcs[i][j]) dp[i][j] -= dp[i-1][j-1]; dp[i][j] = MOD(dp[i][j]);

                }
            }
        }
    }
    return (dp[m][n]+mod) % mod;

}
int main()
{
    int t;sf(t);int casee=0;
    while(t--)
    {
        cin>>line1>>line2;
        int m = line1.size(),n = line2.size();
        cout<<cs<<lcs_revisited(m,n)<<endl;
    }
}
/**
8

acbd
acbd

vnvn
vn

ab
ba

xyz
abc

vdzkvaqkjwlidmt
tbauavvi

aieosefikoy
hqmkbqkoxnkj

xggevjas
obvgoxjesptxy

lknxppvsheizqh
rncliaekgr
*/


