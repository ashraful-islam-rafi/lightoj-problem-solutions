/**
 * Author: Ashraful Islam Rafi
 * University: Leading University,Sylhet
 * url:   http://www.lightoj.com/volume_showproblem.php?problem=1245
 * problem id: 1245 - Harmonic Number (II)
 * complexity: 2nd level(number theory)
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
#define MST(a,tf) memset(a, tf, sizeof (a))
#define mx 100003
int main()
{
    int t;sf(t);int casee=0;long long fans,ans=0;int p=0;
    while(t--)
    {
        fans=0; ans=0;p=0;
        int n;sf(n);int v[mx];
        int val=sqrt(n);
        for(int i=1;i<=val;i++)
        {
           int  tmp= n/i;
           v[i]=i; v[i+1]=tmp;
	   if(v[i]<v[i+1])   swap(v[i],v[i+1]);
           ans += tmp;
        }
        //sort(v.rbegin(),v.rend());//for(long long i=0;i<val;i++)clog<<v[i]<<" ";clog<<endl;
     
        p=1;
        for(int i=1;i<=val;i++)
        {
         fans += (v[i]-v[i+1]) *p;    p++;
        }
        printf("Case %d: %lld\n",++casee,ans+fans);
        //cout<<cs<<ans+fans<<endl;
    }
}


/*
36/1 = 36
36/2 = 18
from these two parts we are sure that
36/36 = 1
36/18 = 2
So, 36/19 = 36/20 = 36/21 = ... = 36/36 = 1
So, 36/19 + 36/20 + ... + 36/36 = 36 - 18 = 18.

Again,
36/2 = 18
36/3 = 12
from these two parts we are sure that
36/18 = 2
36/12 = 3
So, 36/13 = 36/14 = ... = 36/18 = 2
So, 36/13 + 36/14 + ... + 36/18 = (18 - 12)*2
*/


/**

11
1
2
3
4
5
6
7
8
9
36
2147483647


Case 1: 1
Case 2: 3
Case 3: 5
Case 4: 8
Case 5: 10
Case 6: 14
Case 7: 16
Case 8: 20
Case 9: 23
Case 10: 27
Case 11: 140
Case 12: 46475828386
*/