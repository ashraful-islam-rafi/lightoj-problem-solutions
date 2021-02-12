/**
 * Author: Ashraful Islam Rafi
 * University: Leading University,Sylhet
 * url:   http://www.lightoj.com/volume_showproblem.php?problem=1212
 * problem id: 1212 - Double Ended Queue
 * complexity: Bigginers problem.
 * site: Lightoj.com
**/
#include"map"
#include"set"
#include"queue"
#include"deque"
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
#define Inf 1000000000
#define N 5000010
#define MST(a, tf) memset(a, tf, sizeof (a))
int main()
{
    int _;scanf("%d",&_);  int casee=0;
    while(_--)
    {
        cout<<csE;
        deque<int>dq;
        int n,m; scanf("%d%d",&n,&m);
        while(m--)
        {
            string line;cin>>line; int number;
            if(line=="pushLeft")
            {
                cin>>number;
                if(dq.size()==n) printf("The queue is full\n");
                else
                {
                    dq.push_front(number);
                    printf("Pushed in left: %d\n",number);
                }
            }
            else if (line=="pushRight")
            {
                cin>>number;
                if(dq.size()==n) printf("The queue is full\n");
                else
                {
                    dq.push_back(number);
                    printf("Pushed in right: %d\n",number);
                }
            }
            else if(line=="popLeft")
            {
               if(dq.empty())  printf("The queue is empty\n");
               else
               {
                   ///number=dq.back();
                  /// dq.pop_back();
                   number=dq.front();
                   dq.pop_front();
                   printf("Popped from left: %d\n",number);
               }
            }
            else if(line=="popRight")
            {
                 if(dq.empty()) printf("The queue is empty\n");
                 else
                 {
                     number=dq.back();
                     dq.pop_back();
                     ///number=dq.front();
                     ///dq.pop_front();
                     printf("Popped from right: %d\n",number);
                 }
            }
         }
   }
}
///---Test casee--////
/**
1
3 8
pushLeft 1
pushLeft 2
pushRight -1
pushRight 1
popLeft
popRight
popLeft
popRight



Case 1:
Pushed in left: 1
Pushed in left: 2
Pushed in right: -1
The queue is full
Popped from left: 2
Popped from right: -1
Popped from left: 1
The queue is empty
*/