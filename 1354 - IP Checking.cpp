/**
 * Author: Ashraful Islam Rafi
 * University: Leading University,Sylhet
 * url:   http://lightoj.com/volume_showproblem.php?problem=1354
 * problem id: 1354 - IP Checking
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
#include"stdio.h"
#include"cstring"
#include"cstdlib"
#include"string.h"
#include"bitset"
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
	int t;sf(t);int casee = 0;
	bitset<8>second[6];
	while(t--)
	{	
		int first1,first2,first3,first4; 
		//unsigned a,b,c,d;
        scanf("%d.%d.%d.%d",&first1,&first2,&first3,&first4);
        
		char str;
		
		
		cin>>second[0]>>str>>second[1]>>str>>second[2]>>str>>second[3];
	
		
		//~ cout<<endl;
		//~ cout<<first1<<"."<<first2<<"."<<first3<<"."<<first4;
		//~ cout<<endl;
		//~ cout<<second[0]<<"."<<second[1]<<"."<<second[2]<<"."<<second[3]<<endl;
		
		if(first1 == second[0].to_ulong() && first2 == second[1].to_ulong() && first3 == second[2].to_ulong() && first4 == second[3].to_ulong())
			cout<<cs<<"Yes"<<endl;
		else cout<<cs<<"No"<<endl;
		
	}
}
