#include<iostream>
using namespace std;
int main(void)
{
    int n,k,q,i,l;
    cin>>n>>k>>q;
    int a[n],b[n];
    for(i=0;i<n;i++)
        cin>>a[i];
    int p=k%n;
    for(i=0;i<n;i++)
    {
        int r=i+p;
        if(r<n)
            b[r]=a[i];
        else
            b[r-n]=a[i];
    }
    for(i=0;i<q;i++)
    {
        cin>>l;
        cout<<b[l]<<endl;
    }
    return 0;
}
