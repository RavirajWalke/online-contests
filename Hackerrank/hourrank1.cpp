#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    long long t;
    cin>>t;
    long long n,c=1;
    for(n=0;c<=t;n++)
    {
        c=c+3*pow(2,n);
    }
    long long v=c-t;
    cout<<v;
    return 0;
}
