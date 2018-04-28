/**
 *
 * @author Ravi
 */
#include<iostream>
using namespace std;
int main()
{
 int s,t,a,b,m,n,d,counta=0,counto=0;
 cin>>s>>t;
 cin>>a>>b;
 cin>>m>>n;
 for(int i=0;i<m;i++)
 {
     cin>>d;
     int posapp=a+d;
     if(posapp>=s&&posapp<=t)
        counta++;
 }
 for(int i=0;i<n;i++)
 {
     cin>>d;
     int posor=b+d;
     if(posor>=s&&posor<=t)
        counto++;
 }
 cout<<counta<<endl<<counto;
 return 0;
}
