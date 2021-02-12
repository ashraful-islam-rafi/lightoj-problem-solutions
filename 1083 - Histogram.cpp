/**
 * Author: Ashraful Islam Rafi
 * University: Leading University,Sylhet
 * url:   http://www.lightoj.com/volume_showproblem.php?problem=1278
 * problem id: 1083 - Histogram
 * complexity: 2nd level(Number theory)
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
#define size_N 10000000
#define MST(a, tf) memset(a, tf, sizeof (a))



long long hit[30010],lft[30010],rit[30010];
long long maxx,sum;

int main()
{
    int t;sf(t);int casee=0;
    while(t--)
    {
        int n;sf(n);  maxx=0; sum=0;

        for(int i=1;i<=n;i++)
        {
            cin>>hit[i];
            lft[i]=rit[i]=i;
        }

        hit[0]= hit[n+1] =-1;

        for(int i=1;i<=n;i++)
        {
          //clog<<hit[i]<<" "<<hit[lft[i]-1]<<endl;

           while(hit[i] <= hit[lft[i] -1])
               lft[i] = lft[lft[i] -1];

          // clog<<lft[i]<<endl;
        }

      //  clog<<"-----------\n";
        for(int i=n;i>=1;i--)
        {
            //clog<<hit[i]<<" "<<hit[rit[i]+1]<<endl;

            while(hit[i] <= hit[rit[i]+1])
            {
                rit[i]= rit[rit[i]+1];
            }
           // clog<<rit[i]<<endl;
        }



        for(int i=1;i<=n;i++)
        {
            sum= ( hit[i] ) * ( rit[i] - lft[i]+1 );
           if(sum>maxx)
             maxx=sum;
        }
        cout<<cs;
        printf("%lld\n",maxx);
    }
}

///---tst case---///
/**
2

7
2 1 4 5 1 3 3
5
4 4 3 2 4

Case 1: 8
Case 2: 10
*/