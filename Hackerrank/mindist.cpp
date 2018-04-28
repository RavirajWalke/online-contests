#include<iostream>
using namespace std;
int main()
{
    int n,i,j,k,diff=0,mindiff=10000;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
        cin>>a[i];
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                diff=j-i;
                if(diff<mindiff)
                    mindiff=diff;
            }
        }
    }
    cout<<mindiff;
    return 0;
}


