#include<iostream>
using namespace std;
int main()
{
    int n,i,count=0;
    cin>>n;
    int c[n];
    for(i=0;i<n;i++)
        cin>>c[i];
    i=0;
    while(i<n-1)
    {
        if(c[i+2]==0)
        {
            i=i+2;
           count++;
        }
        else
        {
            i++;
            count++;
        }
    }
    cout<<count;
    return 0;
}
