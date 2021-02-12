/*
 *Author: Ashraful Islam Rafi
 * University: Leading University,Sylhet
 * url:   http://www.lightoj.com/volume_showproblem.php?problem=1107
 * problem id: 1107 - How Cow
 * complexity: 1st level
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
#include"ctype.h"

using namespace std;


int main()
{
    int t;cin>>t;int a,b,c,d;
    int x,y=0;int cas=0;
    while(t--)
    {
        int n=0;
        cin>>a>>b>>c>>d; cin>>n;
        cout<<"Case "<<++cas<<":\n";
            while(n--)
            {
                cin>>x>>y;
                if(x<=a || x >=c || y<=b  || y>=d) cout<<"No\n";
                else cout<<"Yes\n";
            }
    }
}
///---test case
/*
1
1 2 8 10
7
0 0
5 6
1 0
7 9
3 5
10 10
1 11
*/
