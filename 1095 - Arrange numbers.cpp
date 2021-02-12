/**
 * Author: Ashraful Islam Rafi
 * University: Leading University,Sylhet
 * url:   http://www.lightoj.com/volume_showproblem.php?problem=1095
 * problem id: 1095 - Arrange numbers
 * complexity: 2nd level(DP)
 * site: Lightoj.com
**/
#include"map"
#include"set"
#include"queue"
#include"cmath"
#include"stack"
#include"cstdio"
#include"vector"
#include"cstdio"
#include"cstring"
#include"cstdlib"
#include"ctype.h"
#include"string.h"
#include"iostream"
#include"algorithm"
using namespace std;
#define cs "Case "<<++casee<<": "
#define csE "Case "<<++casee<<":\n"///cout<<cs<<ans<<endl;
const int mod=1000000007;
long long choose[1020][1020], fact[1020];
void AraNum()
{
   for(int i=0;i<=1010;i++) choose[i][0]=choose[i][i]=1; ///---making all [i][i]th index one<1>
  /**for(int i=0;i<=30;i++,cout<<endl) for(int j=0;j<30;j++) cout<<choose[i][j]<<" ";*/
   for(int i=1;i<=1010;i++) ///---storing the all possible value for [m][k] in choose array
     for(int j=1;j<i;j++)
       choose[i][j]=(choose[i-1][j-1]+choose[i-1][j]) %mod; ///cout<<choose[6][3]<<" "<<endl;
  /** for(int i=0;i<=20;i++,cout<<endl)for(int j=0;j<20;j++) cout<<choose[i][j]<<" "; */
  fact[0]=fact[1]=1;
  for(int i=2;i<1020;i++)  fact[i]=(fact[i-1]*i) %mod;/**factorial generates here--though it will not work beyond 12 bt i have to generate a loop atleast for 1000 length...lol..**/
  ///for(int i=0;i<13;i++,cout<<endl) cout<<i<<": "<<fact[i]<<" ";
}
int main()
{
  AraNum();
  int t,casee=0;cin>>t;
  while(t--)
  {
    long long ans=0;
    int n,m,k;cin>>n>>m>>k;
    for(int i=0;i<=m-k;i++)
    {
       if(i%2) ans+= -1 * (choose[m-k][i] * fact[n-k-i]) %mod;///---if even--
       else  ans+= 1 * (choose[m-k][i] * fact[n-k-i]) %mod;  ///----if odd---
       ans = ans %mod; /// cout<<ans<<endl;
    } ///cout<<ans<<" ";cout<<choose[m][k]<<" "<<endl;
    ans=((ans*choose[m][k])% mod+mod+mod+mod+mod+mod+mod+mod+mod+mod) % mod;
    cout<<cs<<ans<<endl;
  }
  return 0;
}
///--test case--//
/**
2
5 3 2
10 6 3

Case 1: 12
Case 2: 64320
**/
