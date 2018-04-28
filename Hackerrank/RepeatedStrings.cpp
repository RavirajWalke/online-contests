/**
 *
 * @author Ravi
 */
#include<iostream>
using namespace std;
int main()
{
 string s;
 cin>>s;
 long long n,q;
 int c=0,count=0,r;
 cin>>n;
 int m=s.length();
 q=n/m;
 r=n%m;
 for(int i=0;i<m;i++)
 {
     if(s[i]=='a')
        count++;
    if(i==r-1)
         c=count;
 }
 //cout<<count<<q<<r<<c<<endl;
 long long nas=count*q+c;
 cout<<nas;
 return 0;
}
