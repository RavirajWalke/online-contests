#include<iostream>
using namespace std;
int power(int n,int p)
{
    if(p==1)
        return n;
    else
   n=n*power(n,p-1);
}
int main()
{
    int p,n,pow;
    cin>>n>>p;
    pow=power(n,p);
    cout<<pow;
    return 0;
}
