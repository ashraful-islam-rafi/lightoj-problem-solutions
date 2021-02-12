/**
 * Author: Ashraful Islam Rafi
 * University: Leading University,Sylhet
 * url:   http://www.lightoj.com/volume_showproblem.php?problem=1010
 * problem id: 1010 - Knights in Chessboard
 * complexity: 2nd level(biginers problem)
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
#define sf(t) scanf("%d",&t)
#define sNE(n,e) scanf("%d %d",&N,&E)
#define Inf 1000000000
#define S_N 5000010
#define MST(a, tf) memset(a, tf, sizeof (a))

int main()
{
    int tt,t=0,i,j,k,rw,cl,f1,f2,ans;
    sf(tt); int casee=0;
    while(tt--)
    {
        cin>>rw>>cl;

        if(cl % 2==0)
        {
            f1=cl/2;
            f2=f1;
        }
        else
        {
            f1=(cl+1)/2;
            f2=f1-1;
        }

        if(cl==1 || rw==1)
        {
            ans=rw*cl;
            cout<<cs<<ans<<endl;  continue;
        }

        if(rw==2)
        {
            if(cl % 2==0)
            {
                if(cl % 4==0)
                {
                    ans=cl;
                    cout<<cs<<ans<<endl; continue;
                }
                ans=cl+2;
                cout<<cs<<ans<<endl; continue;
            }
            else
            {
                ans=cl+1;
                cout<<cs<<ans<<endl; continue;
            }
        }

        if(cl==2)
        {
            if(rw%2==0)
            {
                if(rw%4==0)
                {
                    ans=rw;
                    cout<<cs<<ans<<endl; continue;
                }
                ans=rw+2;
                cout<<cs<<ans<<endl; continue;
            }
            else
            {
                ans=rw+1;
                cout<<cs<<ans<<endl;  continue;
            }
        }
        if(rw % 2==0) ans=f1*(rw/2)+f2*(rw/2);
        else ans=f1 * ((rw/2)+1) + f2*(rw/2);
        cout<<cs<<ans<<endl;
    }
}

///---tnQss to KC.......:P---////
///---test case--//
/**
3
8 8
3 7
4 10

Case 1: 32
Case 2: 11
Case 3: 20
*/
