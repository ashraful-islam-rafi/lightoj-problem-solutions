/**
 * Author: Ashraful Islam Rafi
 * University: Leading University,Sylhet
 * url:   http://www.lightoj.com/volume_showproblem.php?problem=1016
 * problem id: 1016 - Brush (II)
 * complexity: 2nd level(DP)
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
    int t;cin>>t;int casee=0;
    while(t--)
    {
        int n,w,ans=0;;
        vector<int>v;  sf(n),sf(w);
        for(int i=0;i<n;i++)
        {
            int x,y;
            sf(x);sf(y); v.push_back(y);
        }
        sort(v.begin(),v.end()); ///for(int i=0;i<n;i++) cout<<v[i]<<" ";
        int i=0;
        while(i<n)
        {
            int k=v[i]+w;
            while(v[i]<=k && i<n)
            {
                i++; ///cout<<"i: "<<i<<endl;
            }
            ans++; ///cout<<"ans: "<<ans<<endl;
        }
        cout<<cs<<ans<<endl;

    }
}


/**
4
5 3
0 900
0 -1000
0 904
0 -1003
0 0

3 2
0 0
20 2
30 2

3 1
0 0
20 2
30 2

Case 1: 4
Case 2: 1
Case 3: 2

*/

