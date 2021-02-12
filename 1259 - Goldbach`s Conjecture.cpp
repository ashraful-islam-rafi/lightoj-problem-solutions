/**
 * Author: Ashraful Islam Rafi
 * University: Leading University,Sylhet
 * url:   http://www.lightoj.com/volume_showproblem.php?problem=1259
 * url:   http://uva.onlinejudge.org/external/6/686.html
 * url:   http://uva.onlinejudge.org/external/6/543.html
 * problem id: 1259 - Goldbach`s Conjecture
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
#define N 10000003
#define MST(a, tf) memset(a, tf, sizeof (a))

vector<int>primes;
vector<bool>arr(10000002);
bool sieve()
{
    for(int i=2; i<=N; i++)
    {
        if(arr[i]==false)
        {
            for(int j=i+i; j<=N; j=j+i)    arr[j]=true;
        }
        if(arr[i]==false)  primes.push_back(i);
    }
}

int main()
{
    sieve();
    int i,j,k;int casee=0;
    int t; scanf("%d",&t);
    while(t--)
    {
            int ans=0; int n; scanf("%d",&n);
            for(i=0; primes[i]<n; i++)
            {
                k=n-primes[i];   // printf("%d %d\n",prim[0],k);
                if(k<primes[i]) break;
                if(!arr[k])  ans++;
                else continue;
            }
            cout<<cs;
            printf("%d\n",ans);
    }
}
///---test casee---//
/**
3
6
4
5000000


Output:
Case 1: 1
Case 2: 1
Case 3: 21290
*/

///int siv[N],prim[N];
/**void sieve()
{
    int i,j,k=0;
    for(i=0; i<=N; i++) siv[i]=1; ///MST(siv,1);  ///--memset doesn't work???
    siv[0]=siv[1]=0;

    for(i=2; i<=N; i++)
    {
        if(siv[i]==1)
        {
            for(j=i+i; j<=N; j=j+i)    siv[j]=0;
        }
        if(siv[i]==1)
        {
            prim[k]=i; k++;
        }
    }
}
*/