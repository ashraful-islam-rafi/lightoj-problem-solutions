/**
 * Author: Ashraful Islam Rafi
 * University: Leading University,Sylhet
 * url:   http://www.lightoj.com/volume_showproblem.php?problem=1191
 * problem id: 1191 - Bar Codes
 * complexity: 2nd level
 * site: Lightoj.com
**/

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




long long int dp[55][55][55];

long long int ways(int n,int b,int c)
{
    if(!n)return !b;
    if(!b) return 0;
    if(dp[n][b][c]!=-1) return dp[n][b][c];

    else
    {
        unsigned long long int nways=0;
        for(int i=1;i<=c && i<=n;i++)
        {
              nways+=ways(n-i,b-1,c);
              ///cout<<nways<<endl;
        }
        return dp[n][b][c]=nways;
    }
}
int main()
{
    int x,y,n,m,k;
    int t;scanf("%d",&t);//cin>>t;
    int casee=0;
    memset(dp,-1,sizeof dp);
    while(t--)
    {

        scanf("%d %d %d",&n,&k,&m);

        //printf("Case %d: ",++casee);
        cout<<cs;
        printf("%llu\n",ways(n,k,m));
    }
    return 0;
}
///---test case---..
/*
2
7 4 3
7 4 2
*/
