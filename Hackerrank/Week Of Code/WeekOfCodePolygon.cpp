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
    int n,max=-2,sum=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        sum=sum+a[i];
        if(a[i]>max)
            max=a[i];
    }
    sum=sum-max;
    if(n==1||(n==2&&max==sum))
      cout<<"2";
    else
      {
        if(sum<=max)
            cout<<"1";
        else
            cout<<"0";
      }
    return 0;
}
