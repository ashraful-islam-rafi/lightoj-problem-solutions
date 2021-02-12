 /**
 * Author: Ashraful Islam Rafi
 * University: Leading University,Sylhet
 * url:   http://www.lightoj.com/volume_showproblem.php?problem=1098
 * problem id: 1098- A new function
 * complexity: 2nd level(Number theory)
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
#define Inf 1000000000
#define N 5000010
#define MST(a, tf) memset(a, tf, sizeof (a))

int main()
{
    int t;cin>>t;int casee=0;unsigned long long sum=0;
    while(t--)
    {
         sum=0;
         unsigned long long int n;cin>>n;
         unsigned long long sqr= (unsigned long long ) sqrt(n);
         unsigned long long i,j,ans;

         for(i=2;i<=sqr;i++)
         {
             ans=n/i;
             sum += ((ans*(ans+1)/2) - ((i+1)* i/2) + (i*(ans-i+1)));
         }
        cout<<cs<<sum<<endl;
    }
    return 0;
}

///--test case--///
/**
3

2
100
200000000

Case 1: 0
Case 2: 3150
Case 3: 12898681201837053
*/
