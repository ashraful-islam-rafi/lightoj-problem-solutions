/**
 * Author: Ashraful Islam Rafi
 * University: Leading University,Sylhet
 * url:   http://www.lightoj.com/volume_showproblem.php?problem=1136
 * problem id: 1136 - Division by 3
 * complexity: 2nd level(DP)
 * site: Lightoj.com
**/
#include"map"
#include"set"
#include"queue"
#include"cmath"
#include"stack"
#include"cstdio"
#include"vector"
#include"cstdio"
#include"cstring"
#include"cstdlib"
#include"ctype.h"
#include"string.h"
#include"iostream"
#include"algorithm"
using namespace std;
#define cs "Case "<<++casee<<": "
#define csE "Case "<<++casee<<":\n"
int main()
{
    int t;cin>>t;int casee=0;
    while(t--)
    {
         int n,m;cin>>n>>m;int ans1=0;int ans2=0;int a,b;
         n=n-1;
         if(n%3==0) ans1= n-(n/3);
         else ans1= n-1*(n/3)-1; ///cout<<ans1<<endl;
         if(m%3==0) ans2= m-(m/3);
         else ans2= m-(m/3)-1; ///cout<<ans2<<endl;
         cout<<cs<<ans2-ans1<<endl;
    }
}
///---test case--//
/**
2
3 5
10 110
*/