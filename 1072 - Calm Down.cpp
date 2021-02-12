/**
 * Author: Ashraful Islam Rafi
 * University: Leading University,Sylhet
 * url:   http://www.lightoj.com/volume_showproblem.php?problem=1072
 * problem id: 1072 - Calm Down
 * complexity: Geomatry
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
    int t; sf(t); int casee=0;
    while(t--)
    {
        double R, N; cin >> R >> N;cout<<cs;
        double r = (R * sin(pi / N)) / (1 + sin(pi / N));
        if(r == int(r))    printf("%.0lf\n", r);
        else  printf("%.10lf\n", r);
    }
}

/*
4
4.0 6
4.0 17
3.14 100
42 2


Case 1: 1.3333333333
Case 2: 0.6209067545
Case 3: 0.0956260953
Case 4: 21
*/


