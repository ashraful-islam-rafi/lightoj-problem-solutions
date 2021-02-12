/**
 * Author: Ashraful Islam Rafi
 * University: Leading University,Sylhet
 * url:   http://www.lightoj.com/volume_showproblem.php?problem=1202
 * problem id: 1202 - Bishops
 * complexity: Bigginers problem
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
int main()
{
    int t; scanf("%d", &t);
    int casee=0;
    while(t--)
    {
        int a,b,c,d; cin>>a>>b>>c>>d;
        if((a+b) %2 != (c+d) %2)  cout<<cs<<"impossible\n";
        else
            if(abs(a-c) == abs(b-d))  cout<<cs<<"1\n";
            else cout<<cs<<"2\n";
    }
}
///--test case--///
/**
3
1 1 10 10
1 1 10 11
1 1 5 3

Case 1: 1
Case 2: impossible
Case 3: 2
*/
