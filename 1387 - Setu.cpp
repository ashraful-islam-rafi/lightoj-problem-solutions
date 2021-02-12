/**
 * Author: Ashraful Islam Rafi
 * University: Leading University,Sylhet
 * url:   http://www.lightoj.com/volume_showproblem.php?problem=1387
 * problem id: 1387 - Setu
 * complexity: Bigginers problem.
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
    int t; cin>>t;
    int ca=0;
    while(t--)
    {
        int n; cin>>n;
        cout<<"Case "<<++ca<<":"<<endl;
        int ans=0;
        while(n--)
        {
            string input;
            cin>>input;
            if(input== "donate")
            {
                int amount; cin>>amount;
                ans=amount+ans;
            }
            else cout<<ans<<endl;
        }
    }
}
