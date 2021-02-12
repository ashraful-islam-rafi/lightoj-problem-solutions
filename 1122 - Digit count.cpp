/**
 * Author: Ashraful Islam Rafi
 * University: Leading University,Sylhet
 * url:   http://www.lightoj.com/volume_showproblem.php?problem=1122
 * problem id: 1122 - Digit count
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
int m,n;
int arr[11];
int totalSum;
void Digit_count(int val, int mn)
{
    if(mn==0){totalSum++; return;}
    for(int i=0; i<m; i++)
       if(abs(arr[i] - val)<=2)
         Digit_count(arr[i], mn-1);
}
int main()
{
    int _; scanf("%d", &_);
    int casee=0;
    while(_--)
    {
        scanf("%d %d",&m,&n);
        for(int i=0; i<m; i++) scanf("%d",&arr[i]);
        totalSum=0;
        for(int i=0; i<m; i++)
            Digit_count(arr[i], n-1);
        cout<<cs<<totalSum<<endl;
    }
}
///---test case-//
/**
3

3 2
1 3 6
3 2
1 2 3
3 3
1 4 6

Case 1: 5
Case 2: 9
Case 3: 9
*/
