/**
 * Author: Ashraful Islam Rafi
 * University: Leading University,Sylhet
 * url:   http://www.lightoj.com/volume_showproblem.php?problem=1133
 * problem id: 1133 - Array Simulation
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
    int t;sf(t);
    int casee=0;
    while(t--)
    {
        int a,b,b1[105];
        sf(a);sf(b);
        int m,n,o,p; char ch;
        for(int i=0;i<a;i++)  sf(b1[i]);

        for(int i=0;i<b;i++)
        {
            cin>>ch;
            if(ch=='P')
            {
                sf(o);sf(p);
                swap(b1[o],b1[p]);
            }
           else if(ch=='S')
            {
               sf(o);
               for(int i=0;i<a;i++)
               b1[i]=b1[i]+o;
            }
             else if(ch=='D')
            {
                sf(o);
                for(int i=0;i<a;i++)
                b1[i]=b1[i]/o;
            }
            else if(ch=='M')
            {
                sf(o);
                for(int i=0;i<a;i++)
                b1[i]=b1[i]*o;
            }
             else if(ch=='R')
             {
                 int start=0;  int end=a-1;
                 while(start<end)
                 {
                    swap(b1[start],b1[end]);
                    start++; end--;
                 }
             }
        }

        cout<<csE;
        for(int i=0;i<a;i++)
        {
            if(i) cout<<" ";
            cout<<b1[i];
        }
        cout<<endl;
    }
}

/*

2
5 3
1 2 3 4 5
P 0 1
S 1
R
4 2
2 7 8 1
M 10
D 5


Case 1:
6 5 4 2 3
Case 2:
4 14 16 2

*/
