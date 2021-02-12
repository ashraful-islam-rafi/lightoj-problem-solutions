/**
 * Author: Ashraful Islam Rafi
 * University: Leading University,Sylhet
 * url:   http://www.lightoj.com/volume_showproblem.php?problem=1078
 * problem id: 1078 - Integer Divisibility
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


int main()
{
    long long  t,tc,flag,n,d,now,num;

    sf(t); int casee=0;
    while(t--)
    {
        flag=0; cin>>n>>d;
       /* if(n==19719 && d==6)
        {
             cout<<cs<<"312\n"; continue;//break;
        }*/

        if(d % n == 0)
        {
           flag=1;cout<<cs<<"1\n";
        }
        now=d;  num=1;
        if(flag==0)
        {
            while(1)
            {
		    	if(now==0)
                {
                    cout<<cs<<num<<endl; break;
                }
                now=now*10+d;

                now=now%n;
                num++;

                
            }
        }
    }
    return 0;
}

/*
6
3 1
7 3
9901 1
19719 6
11479 9
26963 5


Case 1: 3
Case 2: 6
Case 3: 12
Case 4: 312
Case 5: 882
Case 6: 4408
*/