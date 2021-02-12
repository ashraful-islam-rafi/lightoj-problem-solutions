/**
 * Author: Ashraful Islam Rafi
 * University: Leading University,Sylhet
 * url:   http://www.lightoj.com/volume_showproblem.php?problem=1159
 * problem id: 1159 - Batman
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
int cache[53][53][53];
string line1,line2,line3;
int lcs(int ln1,int ln2,int ln3)
{
    if(ln1==0 || ln2==0 || ln3==0) return 0;
    if(cache[ln1][ln2][ln3]!=-1) return cache[ln1][ln2][ln3];
    int rv=0;
    if(line1[ln1-1]==line2[ln2-1] && line1[ln1-1]==line3[ln3-1])\
    {
        rv=lcs(ln1-1,ln2-1,ln3-1)+1;
    }
    else
    {
        rv=max(rv,lcs(ln1-1,ln2,ln3));
        rv=max(rv,lcs(ln1,ln2-1,ln3));
        rv=max(rv,lcs(ln1,ln2,ln3-1));
    }
    cache[ln1][ln2][ln3]=rv;
    return rv;
}
int main()
{
int casee=0;
int t;scanf("%d",&t);
while(t--)
{
   memset(cache,-1,sizeof cache);
   cin>>line1>>line2>>line3;
   int strlen1=line1.length();
   int strlen2=line2.length();
   int strlen3=line3.length();
   int ans=lcs(strlen1,strlen2,strlen3);
   cout<<cs<<ans<<endl;
}
}
///---test cas--//
/**
3

abcdef
cdef
dcdef

aaaa
bbbb
ccca

aaaa
aaaa
aaa

Case 1: 4
Case 2: 0
Case 3: 3
*/
