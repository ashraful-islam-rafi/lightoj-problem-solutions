/**
 * Author: Ashraful Islam Rafi
 * University: Leading University,Sylhet
 * url:   http://www.lightoj.com/volume_showproblem.php?problem=1045
 * problem id: 1045- Digits of Factorial
 * complexity: Beginners Problems, Number Theory.
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
#define NN 5000010
#define MST(a, tf) memset(a, tf, sizeof (a))

int i,j,p,c,noz,k;int N,B;
double cache[1000010];
double Digit_of_factorial(int n)
{
   double ans=cache[n];
   ans/=log(B);
   ans+=1.0;
   ans=floor(ans);
   return ans;
}
int main()
{
    int t;scanf("%d",&t);
    MST(cache,0);
    int casee=0; 
    double ans=0;
    for (i=1;i<=1000003;i++)
    {
      ans+=log(i); ///cout<<ans;cout<<endl;
      cache[i]=ans;
    }
    while(t--)
    {
          double answer=0;
          scanf("%d%d",&N,&B);
          answer=Digit_of_factorial(N); //answer=floor(answer);
          printf("Case %d: %.0lf\n",++casee,answer);
    }
}

///--test case--///
/**
10

5 10
8 10
22 3
1000000 2
0 100
390338 185

Case 1: 3
Case 2: 5
Case 3: 45
Case 4: 18488885
Case 5: 1
Case 6: 887906
*/
