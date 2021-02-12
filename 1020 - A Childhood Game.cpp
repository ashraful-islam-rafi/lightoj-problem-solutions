/**
 * Author: Ashraful Islam Rafi
 * University: Leading University,Sylhet
 * url:   http://www.lightoj.com/volume_showproblem.php?problem=1020
 * problem id: 1020 - A Childhood Game
 * complexity: basic math
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
  int t; cin>>t; int casee=0;
  while(t--)
  {
      int n;cin>>n;
      string name; cin>>name;
      cout<<cs;
      if(name=="Bob")
          if(n%3==0) cout<<"Alice";
          else cout<<"Bob";
      else
           if(n%3==1) cout<<"Bob";
           else cout<<"Alice";
      cout<<endl;
  }
}

/**
3
1 Alice
2 Alice
3 Bob

Case 1: Bob
Case 2: Alice
Case 3: Alice
*/

/**int main()        ///---------decimal to binary conversion")
{
int t; cin>>t;
int cs=1;int b[700];int j;
while(t--)
{
    string name; int n;int i=0;
    //cin>>n;cin>>name;
    cin>>n;
    cout<<"Case "<<cs++<<": ";


    while (n>0)
    {
    b[i]=n%2;
    n=n/2;
    i++;
    }

    j=i-1;
    for(i=j;j>=0;j--) cout<<b[j];
}
}
*/
