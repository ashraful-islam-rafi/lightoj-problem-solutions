/**
 * Author: Ashraful Islam Rafi
 * University: Leading University,Sylhet
 * url:   http://www.lightoj.com/volume_showproblem.php?problem=1216
 * problem id: 1216 - Juice in the Glass
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

int main()
{
     int t,casee=0;cin>>t;
     while(t--)
        {
          double r1,r2,h,p;
          cin>>r1>>r2>>h>>p;
          double R1= r2*r2;
          double diff= (r1-r2)/h;  ///cout<<diff<<endl;
          double R2= p*diff+r2;   ///cout<<R2<<endl;
          double final_answer= (pi*p * (R1 + R2*R2 + r2*R2))/3.0;
          cout<<cs;
          printf("%.9lf\n",final_answer);
        }
}

/**

2
5 2 3 2
5 2 3 3


Case 1: 58.643062867
Case 2: 122.52211349
*/
