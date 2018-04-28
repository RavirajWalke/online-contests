/*
 * @author RaviRaj96
 */


#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<ctime>
#include<cmath>
#include<vector>
#include<algorithm>

using namespace std;
int main()
{
    int n,m,k,i=0;
    long long sum=1;
    cin>>n;
    int a[n],b[n];
    for(k=1;k<=n;k++)
    {
        cin>>a[k];
    }
    for(k=1;k<=n;k++)
    {
        if(a[k]==-1)
        {
            for(m=2;m<=n/k;m++)
            {
                if(a[k*m]==-1)
                {
                    b[k]=k;
                }
                else
                    b[k]=1;
            }
            sum=sum*b[k];
        }

    }
    cout<<sum;
   return 0;
}
