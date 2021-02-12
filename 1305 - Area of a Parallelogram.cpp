/**
 * Author: Ashraful Islam Rafi
 * University: Leading University,Sylhet
 * url:   http://www.lightoj.com/volume_showproblem.php?problem=1305
 * problem id: 1305 - Area of a Parallelogram
 * complexity: Bigginers problem
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

int main()
{
    int t;cin>>t;  int ax,ay,bx,by,cx,cy,dx,dy,ans1,ans2,AC,OB,Dx,Dy;
    int AB,AB2,AD,AD2; long long FinalArea; int casee=0;
    while(t--)
    {
         cin>>ax>>ay>>bx>>by>>cx>>cy;///>>dx>>dy;
         ans1=ax+cx;

         ans2=ay+cy;///cout<<ans1<<" "<<ans2<<endl;
         Dx=ans1-(bx);
         Dy=ans2-(by);

         AB= bx-ax;
         AB2= by-ay;
         AD= Dx-ax;
         AD2= Dy-ay;
         /// cout<<AB<<" "<<AB2<<" "<<AD<<" "<<AD2<<" "<<endl;
         FinalArea=((AB2*0)-(AB2*0))-((AB*0)-(AD*0))+((AB*AD2)-(AD*AB2));
         cout<<cs<<Dx<<" "<<Dy<<" "<<abs(FinalArea)<<endl;
    }
}
///--test case--//
/**
3
0 0 10 0 10 10
0 0 10 0 10 -20
-12 -10 21 21 1 40

Case 1: 0 10 100
Case 2: 0 -20 200
Case 3: -32 9 1247
**/

/**
The method of calculation called cross product:(line(41-46))
Suppose A(-1,2),B(2,-1),C(6,1),D(3,4)

Area = |AB ´ AD|
First we find the vectors:
AB = [2 - (-1)]i + [-1 - 2]j = 3i - 3j
AD = [3 - (-1)]i + [4 - 2]j = 4i + 2j
Area = |AB ´ AD| = 18.
**/