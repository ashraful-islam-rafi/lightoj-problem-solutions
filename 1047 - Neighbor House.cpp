/**
 * Author: Ashraful Islam Rafi
 * University: Leading University,Sylhet
 * url:   http://www.lightoj.com/volume_showproblem.php?problem=1047
 * problem id: 1047 - Neighbor House
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

int memo[22][4];

int R[22],G[22],B[22],N;

int recur(int ind,int prev)
{
    if(ind>=N) return 0;
    if(memo[ind][prev]!=-1) return memo[ind][prev];
    int rv=1000000000;

    if(prev!=1) rv=min(rv,recur(ind+1,1) + R[ind]);
    if(prev!=2) rv=min(rv,recur(ind+1,2) + G[ind]);
    if(prev!=3) rv=min(rv,recur(ind+1,3) + B[ind]);

    return memo[ind][prev] = rv;
}


int main()
{
    int t,cn=0; cin>>t;
    while(t--)
    {
        cin>>N; MST(memo,-1);//memset(memo,-1,sizeof memo);
        for(int i=0;i<N;i++) cin>>R[i]>>G[i]>>B[i];
        printf("Case %d: %d\n",++cn,recur(0,0));
    }
}

/**
6

4
13 23 12
77 36 64
44 89 76
31 78 45
3
26 40 83
49 60 57
13 89 99

3
10 12 16
4 8 12
5 3 6

20
1 2 3
2 1 3
1 2 3
2 3 1
1 3 2
2 1 3
1 2 3
3 2 1
3 1 2
1 2 3
2 1 3
1 2 3
3 2 1
2 1 3
1 2 3
3 2 1
3 1 2
1 2 3
2 1 3
1 2 3

14
1 2 3
2 1 3
1 2 3
2 3 1
1 3 2
2 1 3
1 2 3
3 2 1
3 1 2
1 2 3
2 1 3
1 2 3
3 2 1
2 1 3


3
10000 10000 1
10 11 10000
1 100 10000


Case 1: 137
Case 2: 96
Case 3: 19
Case 4: 20
Case 5: 14
Case 6: 13
**/
