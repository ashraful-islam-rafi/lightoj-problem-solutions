/**
 * Author: Ashraful Islam Rafi
 * University: Leading University,Sylhet
 * url:   http://www.lightoj.com/volume_showproblem.php?problem=1331
 * problem id: 1331 - Agent J
 * complexity: Bigginers problem(basic math)
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
//#define pi (2*acos(0.0))
#define pi  acos(-1.0)
#define eps (1e-9)


int main()
{
    int t, casee=0;
    double r1,r2,r3,a1,a2,a3, A1,A2,A3, ans, rad;
    rad = 180.0/pi;
    sf(t);
    while(t--)
    {
        scanf("%lf %lf %lf", &r1, &r2, &r3);
        a1 = r2+r3;
        a2 = r1+r3;
        a3 = r1+r2;

        A1 = acos(((r1*(a3+r3))- (r2*r3))/(a3*a2) ) *rad;
        A2=   acos((a1*a1 + a3*a3 - a2*a2)/(2*a1*a3)) *rad;
        A3 = 180 - A1-A2;

        ans = (.5*a2*a3*(sin(A1/rad)));
        ans -= ((pi/360)*((A1*pow(r1,2)) + (A2*pow(r2,2)) + (A3*pow(r3,2)))); /// from the whole triangle, subtracted all sector area = angle(pi* r^2)/360
        //cout<<cs<<ans+eps<<endl;
        printf("Case %d: %.8lf\n", ++casee, ans+eps);
        }
    return 0;
}

/**
10
1.0 1.0 1.0
2 2 2
3 3 3
62.63 15.30 97.01
45.20 53.51 80.94
100 100 1


Case 1: 0.16125448
Case 2: 0.645017923
Case 3: 1.4512903270
Case 4: 223.2257347732
Case 5: 521.9466604917
Case 6: 7.955991758
*/