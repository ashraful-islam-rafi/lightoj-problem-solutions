/*
 *Author: Ashraful Islam Rafi
 * University: Leading University,Sylhet
 * url:   http://www.lightoj.com/volume_showproblem.php?problem=1044
 * problem id: 1044 - Palindrome Partitioning
 * complexity: Medium
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
//cout<<cs<<ans<<endl;


bool palindrom[1010][1010];
char in[1010];

void GeneratePalindrom()
{
    int i,j,k;
    int l=strlen(in);
    memset(palindrom, false, sizeof palindrom);
    ///--odd generates here --//
    for(i=0; i<l; i++)
    {
        j=k=i;
        while(j>=0 && k<l && in[j]==in[k])
        {
            palindrom[j][k] = true;
            j--, k++;
        }
    }
    ///--even generates here--//
    for(i=0; i<l-1; i++)
    {
        j=i, k=i+1;
        while(j>=0 && k<l && in[j]==in[k])
        {
            palindrom[j][k] = true;
            j--, k++;
        }
    }
}

int process()
{
    GeneratePalindrom();
    int i,j,dp[1010];
    int l=strlen(in);
    dp[0]=0;

    for(i=1; i<=l; i++)
    {
        dp[i]=1010;
        for(j=0; j<i; j++)
            if(palindrom[j+1-1][i-1])
                dp[i] = min(dp[i],dp[j]+1);

    }
    return dp[l];
}


int main()
{
    int t; cin>>t;int casee=0;
    while(t--)
    {
        cin>>in;
        cout<<cs<<process()<<endl;

    }
    return 0;
}
///---test case---///
/*
6
AAAA
ABCDEFGH
QWERTYTREWQWERT
ABACCC
ABDA
ABACABA
*/