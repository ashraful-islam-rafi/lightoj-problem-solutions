/**
 * Author: Ashraful Islam Rafi
 * University: Leading University,Sylhet
 * url:   http://www.lightoj.com/volume_showproblem.php?problem=1278
 * problem id: 1278 - Sum of Consecutive long longegers
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
#define sf(t) scanf("%d",&t)
#define sNE(n,e) scanf("%d %d",&N,&E)
#define Inf 1000000000
#define S_N 5000010
#define size_N 10000000
#define MST(a, tf) memset(a, tf, sizeof (a))



bool flag[size_N+5];
vector<long long>primes;

bool seive()
{
    for(long long i=2; i<=size_N; i++)
    {
        if(flag[i]==false)
        {
            for(long long j=i+i; j<=size_N; j=j+i)    flag[j]=true;
        }
        if(flag[i]==false)  primes.push_back(i);
    }
}
long long  store_primes[10000],freq_primes[1000],store_divisors[1000];
long long total_prime,ans;

void divisor(long long N)
{
    long long val,count;
    val = sqrt(N)+1;
    total_prime=0;
    for(long long i=0;i<primes.size()-1 && primes[i]<val;i++)
    {
        if(N%primes[i]==0)
        {
            count=0;
            while(N%primes[i]==0)
            {
                N = N/primes[i]; count++;
            }
            store_primes[total_prime]=primes[i];
            freq_primes[total_prime]=count;
            total_prime++;
            val=sqrt(N)+1;   ///----sqrt again for fast compute;
        }
    }
    if(N>1)
    {
        store_primes[total_prime]=N;
        freq_primes[total_prime]=1;
        total_prime++;
    }
}
void generate(long long cur,long long num)
{
    long long val;
    if(cur==total_prime)
    {

        store_divisors[ans++]=num;
    }
    else
    {
        val=1;
        for(long long i=0;i<=freq_primes[cur];i++)
        {
            generate(cur+1,num*val);
            val=val*store_primes[cur];
        }
    }
}

int  main()
{
    long long total=seive();
    long long  n;long long t;cin>>t;long long casee=0; long long kk=0;
    while(t--)
    {
         cin>>n;
         divisor(n);
         ans=0;
         generate(0,1);
         sort(&store_divisors[0],&store_divisors[ans]);
         kk=0;
         //for(long long i=0;i<ans;i++) cout<<store_divisors[i]<<" "; cout<<endl;
         for(long long i=0;i<ans-1;i++)
         {
            if(store_divisors[i] % 2 !=0) kk++;
         }
         if(n%2==0)  cout<<cs<<kk-1<<endl;
         else cout<<cs<<kk<<endl;

    } return 0;
}

///---test case---///
/**
7
10
15
12
36
828495
12312321333
99999999999973

Case 1: 1
Case 2: 3
Case 3: 1
Case 4: 2
Case 5: 47
Case 6: 7
Case 7: 1
*/