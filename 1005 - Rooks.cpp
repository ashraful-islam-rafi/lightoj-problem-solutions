/**
 * Author: Ashraful Islam Rafi
 * University: Leading University,Sylhet
 * url:   http://www.lightoj.com/volume_showproblem.php?problem=1005
 * problem id: 1005 - Rooks
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
#include"cstdio"
#include"cstring"
#include"cstdlib"
#include"string.h"
#include"iostream"
#include"algorithm"
using namespace std;
#define cs "Case "<<++casee<<": "
#define csE "Case "<<++casee<<":\n"
#define cs "Case "<<++casee<<": "
#define csE "Case "<<++casee<<":\n"
#define sf(t) scanf("%d",&t)
#define sNE(n,e) scanf("%d %d",&N,&E)
#define Inf 1000000000
#define S_N 5000010
#define size_N 10000000
#define size_P 1000000
#define MST(a, tf) memset(a, tf, sizeof (a))
typedef unsigned long long ULL;

ULL ncr[31][31];
ULL fact[31];

void Binomial()
{
    ncr[0][0]=0;
    for(int i=1; i <=30 ;i++)
    {
        ncr[0][i]=0;  ncr[i][0] = 1;
    }
    ncr[1][1]=1; fact[0]=1;   fact[1]=1;

    for(int i= 2;i<=30 ;i++)
    {
        fact[i] = i * fact[i-1];
        for(int k=1;k<=i;k++)
            ncr[i][k] = ncr[i-1][k-1] + ncr[i-1][k];
    }
}

int main()
{
    Binomial(); ULL n, k;

     /**for(int i=0; i <=30 ;i++)
     for(int j=0;j<=30;j++)
       clog<<ncr[i][j]<<" ";
      clog<<endl;*/
     /**for(int i=0;i<30;i++) clog<<fact[i]<<" "; clog<<endl;*/

    int t;sf(t);  int casee=0;
    while(t--)
    {
        cin>>n>>k;
        if(k>n)
        {
        cout<<cs<< "0\n";   continue;
        }
        clog<<ncr[n][k]<<" "<<fact[k]<<endl;
        cout <<cs<<(ncr[n][k] * ncr[n][k] )* fact[k] <<endl;
    }
    return 0;
}
/**
15
1 1
2 1
3 1
4 1
4 2
4 3
4 4
4 5
1 0
30 1
30 20
30 2
1 0

Case 1: 1
Case 2: 4
Case 3: 9
Case 4: 16
Case 5: 72
Case 6: 96
Case 7: 24
Case 8: 0
Case 9: 1
Case 10: 900
Case 11: 353469769534668800
Case 12: 378450
Case 13: 1
*/

