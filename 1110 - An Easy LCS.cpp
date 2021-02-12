/*
 * Author: Ashraful Islam Rafi
 * University: Leading University,Sylhet
 * url:   http://www.lightoj.com/volume_showproblem.php?problem=1110
 * problem id: 1110 - An Easy LCS
 * complexity: 2nd level(DP)
 * site: Lightoj.com
*/
#include"stack"
#include"iostream"
#include<stdio.h>
#include"algorithm"
#include"vector"
#include"cstdio"
#include"cstring"
#include"string.h"
#include"cstdlib"
#include"map"
#include"set"
#include"queue"
#include"cmath"
#include"ctype.h"

using namespace std;
//string line1="axyz";        ///zxcvbn
//string line2="xlyxza";     ///hjgasbznxbzmx
string cache[105][106]; //this is for Memoization process
string line1,line2;
string temp[110];
string lcs(int m, int n)
{
    if(m==0 or n==0) return "" ; ///if any of the string is empty it will return 0
    if(cache[m][n]!="-1") return cache[m][n];  ///if we already calculated it we will just return the calculated value
    string rv="";
    ///if(line1[m-1]==line2[n-1]) rv=lcs(m-1, n-1)+1;//reducing the last element as they are same
    if(line1[m-1]==line2[n-1]) rv=lcs(m-1, n-1)+line1[m-1];
    else
    {
        rv=max(rv, lcs(m-1, n));    ///reducing the last element of string 1
        rv=max(rv, lcs(m, n-1));    ///reducing the last element of string 2
        //rv=max(rv, lcs(m-1, n-1)); ///reducing the lest element from both string
        string len1=lcs(m-1,n); int sizelen1=len1.size();
        string len2=lcs(m,n-1); int sizelen2=len2.size();
        if(sizelen1 > sizelen2) rv=len1;
        else if(sizelen1==sizelen2)
        {
            if(len1 > len2) rv=len2;
            else rv=len1;
        }
        else rv=len2;

        /*for (int i=0;i<m.size();i++)
            for (int j=i+1;j<n.size();j++)
            {
                if (strcmp(cache[i],cache[j])>0)
                {
                strcpy(temp,cache[i]);
                strcpy(cache[i],cache[j]);
                strcpy(cache[j],temp);
                }
            }
        */
    }
    cache[m][n]=rv;
    return rv;
}

int main()
{

    int t;cin>>t;int casee=0;
    while(t--)
    {
        //memset(cache,"-1",sizeof cache);
        for(int i=0;i<105;i++) for(int j=0;j<106;j++) cache[i][j]="-1";
        cin>>line1>>line2;
        int m=line1.length(); int n=line2.length();
        string comparison=lcs(m,n);
        //for(int i=0;i<=m;i++,cout<<endl) for(int j=0;j<=n;j++) cout<<cache[i][j]<<" ";
        cout<<"Case "<<++casee<<": ";
        if(comparison.length()==0) cout<<":("<<endl;
        else cout<<comparison<<endl;
    }
}
///---test case---///
/*
10

ab
ba

zxcvbn
hjgasbznxbzmx

abdcw3w
gebcw3dc

you
kjhs

abcbea
bcaabb
*/