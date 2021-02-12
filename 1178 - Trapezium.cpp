/**
 * Author: Ashraful Islam Rafi
 * University: Leading University,Sylhet
 * url:   http://lightoj.com/volume_showproblem.php?problem=1178
 * problem: 1178 - Trapezium
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
using namespace std;
#define csnl "Case "<<kase++<<":"<<endl;
#define cs "Case "<<kase++<<": "
#define sf(input) scanf("%d", &input)
#define set(value, array) memset(array, value, sizeof array);

int main()
{
	int t; sf(t);
	int casee=0;
	while(t--)
	{
		double a, b, c, d, e; cin >> a >> b >> c >> d;
		double n  = sqrt( (a + b + d - c) * ( c - a + b + d) * (c - a + b - d) * ( c - a - b + d));
		double height = n / ( 2 * ( c - a) );
		double area = 0.5 * (a + c) * height;
		area = abs(area);
		printf("Case %d: %.10lf\n", ++casee,area);
	}
}
