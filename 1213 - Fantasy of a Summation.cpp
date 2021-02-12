
 /**
 * Author: Ashraful Islam Rafi
 * University: Leading University,Sylhet
 * url:   http://www.lightoj.com/volume_showproblem.php?problem=1213
 * problem id: 1213 - Fantasy of a Summation
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
unsigned long long  power(unsigned long long  x,unsigned long long  y,unsigned long long md)
{
    if(y==0) return 1;
    if(y%2==1)  return (x* power(x,y-1,md))%md; ///return ((x%md) * (power(x,y-1,md)%md))%md;
    else
    {
        unsigned long long val=power(x,y/2,md);
        return (val* val ) % md;             ///return ((val%md) * (val %md))%md;
    }
    /*if(y==0) return 1;
    if(y%2==1) return  (x* power(x,y-1,md))%md;
    else
    {
        //unsigned long long modulas= (k * power(n,k-1,m))%m;
        unsigned long long moddz= power(x,y/2,md)%md;
        return (moddz * moddz) %md;
    }
    */

}

int main()
{
    int t;cin>>t;int casee=0;
    while(t--)
    {
        unsigned long long n,k,m,valu,result=0;
        cin>>n>>k>>m;
        for(unsigned long long i=0;i<n;i++)
        {
          cin>>valu;
          result = (result+(valu * (k * power(n,k-1,m) %m) %m ))%m;
          //result = (result+(valu * modulas) %m )%m;
        }
       cout<<cs<<result<<endl;
    }
}

///--test case---///
/**
2

3 1 35000
1 2 3
2 3 35000
1 2

Case 1: 6
Case 2: 36
*/
