/**
 *Author: Ashraful Islam Rafi
 * University: Leading University,Sylhet
 * url:   http://www.lightoj.com/volume_showproblem.php?problem=1214
 * problem id: 1214 - Large Division
 * complexity: 2nd level(DP)
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
#include"math.h"
#include"ctype.h"

using namespace std;
#define cs "Case "<<++casee<<": "
#define csE "Case "<<++casee<<":\n"
#define Inf 1000000000
#define N 5000010
#define MST(a, tf) memset(a, tf, sizeof (a))
int main()
{
     long long i,ans=0,l,cn;
    string aa;
    int t;cin>>t;int casee=0;
    while(t--)
    {
	    ans=0;
        long long n;
        cin>>aa>>n;
        long long  len=aa.length();long long nn=abs(n);
        if(aa[0]=='-')
            for(i=1;i<len;i++)
            {
                 
                 ans=(ans*10+aa[i]-48) % nn;
            }
        else
             for(i=0;i<len;i++)
	        {
			ans=(ans*10+aa[i]-48) % nn;
	        }
	        clog<<88<<endl;
        if(ans==0) cout<<cs<<"divisible\n";
        else   cout<<cs<<"not divisible\n";
    }
    return 0;
}


///---test case--//
/**
55
101 101
0 67
-101 101
7678123668327637674887634 101
11010000000000000000 256
-202202202202000202202202 -101
10737418235 2147483647
23 2
21 11

Case 1: divisible
Case 2: divisible
Case 3: divisible
Case 4: not divisible
Case 5: divisible
Case 6: divisible
Case 7: divisible

*/
