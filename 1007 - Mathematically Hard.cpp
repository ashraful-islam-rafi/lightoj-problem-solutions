/**
 * Author: Ashraful Islam Rafi
 * University: Leading University,Sylhet
 * url:   http://www.lightoj.com/volume_showproblem.php?problem=1007
 * problem id: 1007 - Mathematically Hard
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
#include"cstdio"
#include"cstring"
#include"cstdlib"
#include"string.h"
#include"iostream"
#include"algorithm"
using namespace std;
#define cs "Case "<<++casee<<": "
#define csE "Case "<<++casee<<":\n"
#define INF 1000000000
#define N 5000010
#define MST(a, tf) memset(a, tf, sizeof (a))

using namespace std;

bool visited [N];
unsigned long long  RelativPrm[N],sum;

void sieve ()
{
	MST(visited,true);
	visited[0]= visited[1]=false;
	for(int i=4; i<N; i+=2 ) visited[i]= false;
	///for(int i=0;i<100;i++) cout<<i<<" : "<<visited[i]<<"\n";
	for(int i=0; i<N; i++) RelativPrm[i] =i;
	///for(int i=0;i<100;i++) cout<<i<<" : "<<RelativPrm[i]<<"\n";

	for(int i=2; i<=N; i++)
	{
		if(visited[i])
		{
			for(int j=i; j<N; j += i)
			{
				visited[j]=false;
				RelativPrm[j] = (RelativPrm[j] / i) * (i-1);
			}
		}
	}
	///---to see the relative primes open dis--//
	/**
	   for(int i=0;i<100;i++) cout<<i<<" : "<<RelativPrm[i]<<"\n";
	*/
}

void Squire_Sum()
{
	for(int i=1; i<N; i++ )
	{
		sum = RelativPrm[i] * RelativPrm[i];
		RelativPrm[i] = sum + RelativPrm[i-1];
	}
	///---to see the squire sum of relative primes open dis--//
	/**
	for(int i=1;i<100;i++) cout<<i<<" : "<<RelativPrm[i]<<endl;
	*/
}
int main()
{
	sieve();
	Squire_Sum();
	int t; scanf ("%d", &t);
	int casee=0;
	while(t--)
	{
		int a,b; scanf ("%d %d",&a,&b);
		cout<<cs<<RelativPrm[b] - RelativPrm[a-1]<<endl;
	}
	return 0;
}
///--test casee--///
/**
5
2 5000000
5000000 5000000
4000000 5000000
4999999 5000000
4999999 4999999


Case 1: 17843739680429560645
Case 2: 4000000000000
Case 3: 8707753927266037000
Case 4: 28999980000004
Case 5: 24999980000004
*/
