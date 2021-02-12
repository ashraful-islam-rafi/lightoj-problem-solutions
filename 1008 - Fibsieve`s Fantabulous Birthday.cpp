/**
 * Author: Ashraful Islam Rafi
 * University: Leading University,Sylhet
 * url:   http://www.lightoj.com/volume_showproblem.php?problem=1008
 * problem id: 1008 - Fibsieve`s Fantabulous Birthday
 * complexity: basic math
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

int t;
long long ans1,ans2;
int main()
{
    sf(t);int casee=0;
    while(t--)
    {
        long long s;cin>>s;
        long long n=ceil(sqrt(s)); ///cout<<n<<endl;
        long long sum= n*n-s;
        if(sum<n)
        {  ///clog<<" jj\n";
             ans1=n;
             ans2=n*n-s+1;
        }
        else
        {
           /// clog<<" jjj\n";
            ans1=(-n)*n + 2*n +s-1;
            ans2=n;
        }
         /// long long bbr= (n&1);
        ///cout<<ans1<<" "<<ans2<<" "<< bbr <<endl;
        if(n & 1)swap(ans1,ans2);
        cout<<cs<<ans1<<" "<<ans2<< endl;
    }
}


/**

7
1000000
10000000000
100000000000
10000000000000
8
20
25

output:

Case 1: 1000 1
Case 2: 100000 1
Case 3: 316228 147985
Case 4: 3162278 2149285
Case 5: 2 3
Case 6: 5 4
Case 7: 1 5
*/
