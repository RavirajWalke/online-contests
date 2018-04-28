/**
 *
 * @author Ravi
 */
#include<iostream>
using namespace std;
int main()
{
 int a,b,c,d,e;
 cin>>a>>b>>c;
 e=(a^b)^(b^c);
 d=a^b;
 cout<<e<<" "<<d;
 return 0;
}
