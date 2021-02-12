/*
 *Author: Ashraful Islam Rafi
 * University: Leading University,Sylhet
 * url:   http://www.lightoj.com/volume_showproblem.php?problem=1113
 * problem id: 1113 - Discover the Web
 * complexity: 2nd level
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

int main()
{
    int t,casee=0; cin>>t;


    string url;
    string current;
    //="http://www.lightoj.com/";
    string line;
    while(t--)
    {
         //string url;
         //string current;

         cout<<"Case "<<++casee<<":\n";
         stack<string>forward,back;
         current="http://www.lightoj.com/";
         //while(getline(cin,line) )//&& line!="QUIT")
         while(cin>>line  && line!="QUIT")
         {

            //if(line=="QUIT") break;
           // if(line=="VISIT")
           // {
            //}
            if(line=="FORWARD")
            {
                if(!forward.empty())
                {
                    back.push(current);
                    current=forward.top();
                    forward.pop();
                    cout<<current<<endl;
                }
                else cout<<"Ignored\n";
            }
            else if(line=="BACK")
            {
               if(!back.empty())
               {
                   forward.push(current);
                   current=back.top();
                   back.pop();
                   cout<<current<<endl;
               }
               else cout<<"Ignored\n";
            }
            else if(line=="VISIT")
            {
                /*back.push(current);
                url=line.substr(6);
                current=url;*/

                //while(!forward.empty())
                  //  forward.pop();
                string line2;cin>>line2;
                cout<<line2<<endl;
                forward.push(line2);

                back.push(current);
                url=line2.substr(0);
                current=url;

                while(!forward.empty())
                {
                forward.pop();
                }
                //cout<<url<<endl;
             // goto down;
            }
            /*else
            {
            //down:
            back.push(current);
            url=line.substr(6);
            current=url;

            while(!forward.empty())
            {
                forward.pop();
            }
            cout<<url<<endl;
            }*/
        }
    }
}
///--test case
/*
2
VISIT
http://uva.onlinejudge.org/
VISIT http://topcoder.com/
BACK
BACK
BACK
FORWARD
VISIT http://acm.sgu.ru/
BACK
BACK
FORWARD
FORWARD
FORWARD
QUIT
*/
