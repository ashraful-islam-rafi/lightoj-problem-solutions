/**
 * Author: Ashraful Islam Rafi
 * University: Leading University,Sylhet
 * url:   http://www.lightoj.com/volume_showproblem.php?problem=1414
 * problem id: 1414 - February 29
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

map<string,int>mp;

int count_leap(int year)
{
   return  year/4 - year/100 + year/400;
}

bool chk_lp(int year)
{
   if(year%400 == 0)return true;
   if(year%100 == 0)return false;
   if(year%4 == 0)return true;
   return false;
}

int main()
{

   mp["January"]= 0;   mp["February"]= 1;  mp["March"]= 2;     mp["April"]= 3;
   mp["May"]= 4;       mp["June"]= 5;      mp["July"]= 6;      mp["August"]= 7;
   mp["September"]= 8; mp["October"]= 9;   mp["November"]= 10; mp["December"]= 11;

   int t,casee=0;sf(t);

   while(t--)
   {
       string tmp;char ch;
       int day1,month1,year1,day2,month2,year2;

       cin>>tmp>>day1>>ch>>year1;
       month1= mp[tmp]; ///cout<<month1<<" "<<mp[tmp]<<endl;

       cin>>tmp>>day2>>ch>>year2;
       month2= mp[tmp]; ///cout<<month2<<" "<<mp[tmp]<<endl;


       /**map<string,int>:: iterator it;
       for( it=mp.begin();it!=mp.end();it++)
       {
           cout<<(*it).first<<" "<<(*it).second<<" ";
       }
       cout<<endl;
       */
       ///int res = cnt_leap(year2-1) - cnt_leap(year1);

       int res1 = count_leap(year2-1);
       int res2 = count_leap(year1);  ///cout<<res1<<" "<<res2<<endl;
       int res = res1-res2;          ///cout<<res<<endl;

       ///cout<<month1<<" "<<month2<<" "<<chk_lp(year1)<<" "<<chk_lp(year2)<<endl;

       if(month1<2 && chk_lp(year1))res++;
       if((month2>1 || (month2== 1 && day2== 29)) && chk_lp(year2))res++;

       cout <<cs<<res<<endl;
   }
   return 0;
}


/**
4
January 12, 2012
March 19, 2012
August 12, 2899
August 12, 2901
August 12, 2000
August 12, 2005
February 29, 2004
February 29, 2012


Case 1: 1
Case 2: 0
Case 3: 1
Case 4: 3
*/
