#include<iostream>
using namespace std;
int main(void)
{
    int i,j,n,sum;
    cin>>n;
    int a[n][n];
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
           cin>>a[i][j];
    for(i=0;i<n;i++)
    {
        sum=0;
        for(j=0;j<n;j++)
        {
            sum=sum+a[i][j];
            cout<<a[i][j]<<" ";
        }
        cout<<sum<<endl;
    }
    return 0;
}
