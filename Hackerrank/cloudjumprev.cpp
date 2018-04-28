#include<iostream>
using namespace std;
int main()
{
    int n,k,i,E=100;
    cin>>n>>k;
    int c[n];
    for(i=0;i<n;i++)
        cin>>c[i];
    i=0;
    while(1)
    {
        i=(i+k)%n;
        E--;
        if(c[i]==1)
            E=E-2;
        if(i==0)
            break;
    }
    cout<<E;
    return 0;
}
