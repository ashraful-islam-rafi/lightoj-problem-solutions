/**
 * Author: Ashraful Islam Rafi
 * University: Leading University,Sylhet
 * url:   http://www.lightoj.com/volume_showproblem.php?problem=1249
 * problem id: 1249-Chocolate Thief
 * complexity:
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
    int n,casee=0,no_studnt=0; sf(n);
    while(n--)
    {
        sf(no_studnt);
        int  volume =0;
        int min=0,max=0;
        int res,ans,len,width,height;
        string name,n1,n2;int count=0;

        while(no_studnt--)
        {
             cin>>name>>len>>width>>height;
             volume = len * width * height;


             if(volume > max)
             {
                 count++;
                 if(count == 1 )
                 {
                    max = volume;
                    min = volume;
                    n1 = name;
                    n2 = name;
                 }
                 else{
                     max = volume;
                     n1 = name;
                 }

             }
             else
             {
                 if(min==0)
                 {
                       min = volume;
                       n2 = name;
                 }
                 else if(volume < min )
                 {
                       min = volume;
                       n2 = name;
                 }
             }
        }
        if(max == min)  cout<<cs<<"no thief\n";
        else   cout<<cs<<n1<<" took chocolate from "<<n2<<endl;
    }
}




/**
5
11
atq 3 4 3
mun 10 4 1
sam1 6 6 1
sam2 18 2 1
mub 1 36 1
tan 1 4 9
sha 4 3 3
di 3 12 1
nab 2 2 9
all 8 4 1
fah 3 2 6

2
ja 10 10 10
em 2 50 10

2
mazed 5 5 10
arafat 5 5 10

2
mazed 5 5 10
arafat 5 5 15

3
mazed 5 5 15
arafat 5 5 16
tushar 5 5 17

4
mazed 5 5 2
arafat 5 5 4
tushar 5 5 7
rafi 5 5 3

*/
