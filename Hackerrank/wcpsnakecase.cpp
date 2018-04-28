/**
 *
 * @author Ravi
 */
#include<iostream>
using namespace std;
int main()
{
 int count=0;
 string s;
 cin>>s;
 for(int i=0;i<s.length();i++)
 {
     if(s[i]=='_')
     {
         count++;
     }
 }
 cout<<count+1;
 return 0;
}
