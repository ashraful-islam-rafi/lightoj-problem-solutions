/**
 * Author: Ashraful Islam Rafi
 * University: Leading University,Sylhet
 * url:   http://www.lightoj.com/volume_showproblem.php?problem=1109
 * problem id: 1109 - False Ordering
 * complexity: number theory
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
int ans[1010],false_order[1010];

bool cmp(int x,int y)
{
    if(false_order[x] != false_order[y])
       return false_order[x] < false_order[y];
    else  return x>y;
}
int main()
{
    for(int i=1;i<=1000;i++)
    {
        ans[i]=i;
        for(int j=1;j<i;j++)
           false_order[i] += !(i%j);
    }
    ///for(int i=1;i<=1000;i++) cout<<false_order[i]<<" ";
    sort(ans+1,ans+1000+1,cmp);
    /// for(int i=1;i<=1000;i++) cout<<ans[i]<<" ";

    int t;sf(t);int casee=0;
    while(t--)
    {
        int n;sf(n);
        cout<<cs<<ans[n]<<endl;
    }
}

/**
5

1
2
3
4
1000

Case 1: 1
Case 2: 997
Case 3: 991
Case 4: 983
Case 5: 840

*/
