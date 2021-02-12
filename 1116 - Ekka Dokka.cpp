/**
 * Author: Ashraful Islam Rafi
 * University: Leading University,Sylhet
 * url:   http://www.lightoj.com/volume_showproblem.php?problem=1116
 * problem id: 1116 - Ekka Dokka
 * complexity: 1st level(Number theory)
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

int  main()
{
    int  t;sf(t);long long ans=0;long long casee=0;long long x=0;
    while(t--)
    {
        long long n;cin>>n;ans=0;
         cout<<cs;
        if(n % 2 !=0)  printf("Impossible\n");
        else
        {
            x=1;
            while(n%2==0)
            {
                 // clog<<n<<endl;
                  n = n/2; x= x*2;
            }
            cout<<n<<" "<< x<<endl;
        }

    }
}

///--test casee--///
/**
3

10
5
12



Case 1: 5 2
Case 2: Impossible
Case 3: 3 4
**/
