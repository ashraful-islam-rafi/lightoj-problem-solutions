/**
 * Author: Ashraful Islam Rafi
 * University: Leading University,Sylhet
 * url:   http://www.lightoj.com/volume_showproblem.php?problem=1311
 * problem id: 1311 - Unlucky Bird
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
#define pi acos(-1.0)
#define eps 1e-9
double v1,v2,v3,a1,a2,x;
int t,i;
int main()
{

    scanf("%d",&t); int casee=0;
    while(t--)
    {
        double distance =0; double temp_dist_one = 0; double temp_dist_two = 0;
        
        scanf("%lf %lf %lf %lf %lf",&v1,&v2,&v3,&a1,&a2);
        x=(v1*v1*a2+v2*v2*a1)/(2*a1*a2);   ///cout<<"x: "<<x<<endl;
        
		temp_dist_one =v1/a1; temp_dist_two =v2/a2;

        if(temp_dist_one > temp_dist_two)
            distance = v3 * temp_dist_one;
        else
            distance = v3 * temp_dist_two;
            
		printf("Case %d: %.8lf %.8lf\n",++casee,x,distance);
        /*if(a1<a2 )
        {

            if(v1<v2 && v2<v3 && v3<a1 )
            {
            v1=((v1*v1)/(2*a1));
            v1=sqrt((v1*2)/(a1));
            ans= v3*v1;
            }
            else if(v1>v2 && v3>a1)
            {
            v1=((v1*v1)/(2*a1));
            v1=sqrt((v1*2)/(a1));
            ans= v3*v1;
            }
            else
            {
            v2=((v2*v2)/(2*a2));///cout<<"v2: "<<v2<<endl;
            v2=sqrt((v2*2)/(a2)); ///cout<<"v2-2: "<<v2<<endl;
            ans= v3*v2;
            }
            printf("Case %d: %.10lf %.10lf\n",++casee,x,ans);
        }
        else
        {
            v2=((v2*v2)/(2*a2));//cout<<"v2: "<<v2<<endl;
            v2=sqrt((v2*2)/(a2)); //cout<<"v2-2: "<<v2<<endl;
            ans= v3*v2;
            printf("Case %d: %.10lf %.10lf\n",++casee,x,ans);
        }
        */
    }
    return 0;
}

/**
6
1 1 3 4 4
12.412 112.12 344.112 6 7
0.5 1.0 2 0.25 0.5
2.844 4.483 6.387 21.700 79.330
175.100 13.600 181.000 113.500 227.400
476.800 525.900 555.800 48.940 39.890


Case 1: 0.25000000 0.75000000
Case 2: 910.75917390 5511.69106286
Case 3: 1.50000000 4.0
Case 4: 0.3130360973 0.8370796313
Case 5: 135.4728076048 279.2343612335
Case 6: 5789.2904493794 7327.5312108298
*/
