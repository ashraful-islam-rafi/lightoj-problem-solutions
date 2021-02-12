/**
 * Author: Ashraful Islam Rafi
 * University: Leading University,Sylhet
 * url:   http://www.lightoj.com/volume_showproblem.php?problem=1241
 * problem id: 1241- Pinocchio
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
	
	while(t--)
	{	
		vector<int>v;
		int num_of_lies = 0;
		int num_of_reports = 0; sf(num_of_reports);
		v.push_back(2);	
		
		for(int i=1; i<=num_of_reports; i++)
		{
			int k;sf(k);
			v.push_back(k);	
		}
		
		
		for(int i=1; i<v.size(); i++)
		{
			if(v[i] > v[i-1]){
				num_of_lies += ceil((double)((v[i] - v[i-1]))/5);
							   //ceil((double)((arr[indx]-arr[indx-1]))/5);
				//cout<<i <<" "<<v[i] <<" "<<v[i -1]<<endl;
			}
		}	
		cout<<cs<<num_of_lies<<endl;
		v.clear();
	}
}