
/**
 * Author: Ashraful Islam Rafi
 * University: Leading University,Sylhet
 * url:   http://www.lightoj.com/volume_showproblem.php?problem=1014
 * problem id: 1014 - Ifter Party
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


long long  store_primes[10000],freq_primes[1000],store_divisors[1000010];
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
    long long p,l,n=0;long long t;cin>>t;long long casee=0; long long kk=0;
    while(t--)
    {
         cin>>p>>l;
         n= (p - l); //cout<<n<<endl;

         divisor(n);
         ans=0;
         generate(0,1);
         sort(&store_divisors[0],&store_divisors[ans]);
         kk=0;
         ///for(long long i=0;i<ans;i++) cout<<store_divisors[i]<<" "; cout<<endl;
         cout<<cs;
         if(kk==0)
         {
             for(long long i=0;i<ans;i++)
             {
                if(l < store_divisors[i])
                {
                    cout<<store_divisors[i];
                      if(i < ans-1) cout<<" ";
                    kk++;
                }
             }
             if(kk==0)  cout<<"impossible\n";
             else cout<<endl;
         }

    } return 0;
}

///---test case---///
/**
8
10 0
13 2
300 98
1000 997
16 4
81 0
450248756 5695250
1784742960 0



Case 1: 1 2 5 10
Case 2: 11
Case 3: 101 202
Case 4: impossible
Case 5: 6 12
Case 6: 1 3 9 27 81
Case 7: 8387802 24697417 49394834 74092251 148184502 222276753 444553506
**/
