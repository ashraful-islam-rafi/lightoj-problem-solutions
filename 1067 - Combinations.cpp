/**
 * Author: Ashraful Islam Rafi
 * University: Leading University,Sylhet
 * url:   http://www.lightoj.com/volume_showproblem.php?problem=1067
 * problem id: 1067 - Combinations
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
#define size_N 10000000
#define MST(a, tf) memset(a, tf, sizeof (a))
#define limit 1000010

typedef unsigned long long ULL;
const int m=1000003;
long long fact[1000010];

/*long long big_mod(long long b,long long p,int M)
{
    /*   long long r=1;
    while(p>0)
    {
        if(p%2==1)
        {
            r = (r*b) %M;
        }
        p /= 2;
        b = (b * b) %M;
    }
    return r;
    */
/*
       long long x = 1, y = b;
	    while(p > 0)
	    {
	        if(p%2 == 1)
	        {
	            x=(x*y) ;
	            if(x>M) x%=M;
	        }

	        y = (y*y) ;
	        if(y>M) y%=M;
            p /= 2;
	    }
	    return x;
}

int inverse_modulo(long long a,int m)
{
    return big_mod(a,m-2,m);
}
*/


long long  extended_euclid(long long a,long long b,long long &x,long long &y)
{
    if(b==0)
    {
        x=1;y=0;
        return a;
    }
    long long d;
    d= extended_euclid(b,a%b,y,x);
    y=y- (a/b) * x;
    return d;
}
long long inverse_modulo(long long a,int m)
{
    long long x,y,d;
    d=extended_euclid(a,m,x,y);
    if(d==1) return (x+m) % m;  ///===solution exists
    return -1;  ///===no solution
}

void Binomial()
{
    fact[0]=1; fact[1]=1;
    for(long long i= 2;i<=1000005 ;i++)
    {
        fact[i] = (i * fact[i-1]) %m;
    }
}

int main()
{
    Binomial(); long long n, k;

    int t;sf(t);  int casee=0;

    while(t--)
    {
        cin>>n>>k;
        int  ans= (fact[n]);
        long long  ans2= (fact[k] * fact[n-k] ) ;

        long long fans= inverse_modulo(ans2,m);
        long long fans2= (ans %m * fans %m) %m;
        cout <<cs<<fans2<<endl;

    }
    return 0;
}
/**
4
4 2
5 0
6 4
100 50

Case 1: 6
Case 2: 1
Case 3: 15
Case 4: 440004
*/