/**
 * Author: Ashraful Islam Rafi
 * University: Leading University,Sylhet
 * url:   http://www.lightoj.com/volume_showproblem.php?problem=1042
 * problem id: 1042 - Secret Origins
 * complexity: 1st level(bigginers problem)
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
typedef unsigned int uint_t;

unsigned long long next_same_num_of_ones(unsigned long long a)
{

   unsigned long long c = (a & -a);
   unsigned long long r = a+c;
   return((((r^a) >> 2)/c) | r);



  /**

  uint_t rightOne;
  uint_t nextHigherOneBit;
  uint_t rightOnesPattern;

  uint_t next = 0;

  if(a)
  {
    /// right most set bit
    rightOne = a & -(signed)a;

    /// reset the pattern and set next higher bit
    /// left part of x will be here
    nextHigherOneBit = a + rightOne;

    /// nextHigherOneBit is now part [D] of the above explanation.
    /// isolate the pattern
    rightOnesPattern = a ^ nextHigherOneBit;

    /// right adjust pattern
    rightOnesPattern = (rightOnesPattern)/rightOne;

    /// correction factor
    rightOnesPattern >>= 2;

    ///rightOnesPattern is now part [A] of the above explanation.
    /// integrate new pattern (Add [D] and [A])
    next = nextHigherOneBit | rightOnesPattern;
  }
  return next;
  */
}

int main()
{
  int t;int casee=0;sf(t);int p=0,k=0;
  while(t--)
  {

      unsigned long long d;
      scanf("%llu",&d);
      k = next_same_num_of_ones(d);
      cout<<cs<<k<<endl;
  }
}


/**
10

12
24
28
48
6
1073741822


Case 1: 17
Case 2: 33
Case 3: 35
Case 4: 65
Case 5: 9
Case 6: 1342177279

**/

///---Algorithm
 /**
 let say we have n = 0x11001101,
 x is next smallest. that means x is
 greater than n && x is the smallest
 among all greater && x has the same
 number of 1 bits as x does. Here is my rule to
 change from n to x: change the last 0 to 1;
 if it has 1 bits in the right, change the
 one most close to the last 0 to 0;
 otherwise, change the first 0 to 1, change the first 0's most close 1 to 0
 */
