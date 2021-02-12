/**
 * Author: Ashraful Islam Rafi
 * University: Leading University,Sylhet
 * url:   http://www.lightoj.com/volume_showproblem.php?problem=1282
 * problem id: 1282 - Leading and Trailing
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

int N, K;
long long int FirstLast(int a, int n)
{
    if(n == 1)  return a % 1000;
    long long int ans = FirstLast(a, n / 2);
    ans = (ans * ans) % 1000;
    if(n % 2)   return (ans * a) % 1000;
    else  return ans;
}

int main()
{
    int t;sf(t);int casee=0;
    while(t --)
    {
        long long ans, res; sf(N);sf(K);

        ans = (long long)pow(10, 2 + fmod(K * log10(N), 1));

        res = FirstLast(N, K);
        cout<<cs<<ans;//<<ans<<" "<<res<<endl;
        printf(" %03lld\n",res);
    }
    return 0;
}


/**
5
123456 1
123456 2
2 31
2 32
29 8751919

Case 1: 123 456
Case 2: 152 936
Case 3: 214 648
Case 4: 429 296
Case 5: 665 669

*/
