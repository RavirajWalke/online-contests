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
    int n,k,m,i=0;
    long long sum=1;
    cin>>n;
    int a[n],b[n];
    for(k=1;k<=n;k++)
    {
        cin>>a[k];
    }
    for(k=n;k>0;k--)
    {
        b[k]=k;
        if(a[k]==-1)
        {
            for(m=k-1;m>1;m--)
            {
                if(k%m==0)
                {
                    if(a[k/m]!=-1)
                    {
                         b[k]=b[k]/m;
                         //cout<<m<<" ";
                    }

                    else
                        b[k]=k;
                }
                //cout<<b[k];
            }
            sum=sum*b[k];
        }
    }
    cout<<sum;
    return 0;
}
