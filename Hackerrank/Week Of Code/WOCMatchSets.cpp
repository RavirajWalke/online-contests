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
    int n,i,j,count=0,diff,temp;
    cin>>n;
    int X[n],Y[n];
    for(i=0;i<n;i++)
        cin>>X[i];
    for(i=0;i<n;i++)
        cin>>Y[i];
    for(i=0;i<n;i++)
    {
        for(j=n;j<n-i-1;j++)
        {
            if(X[j]>X[j+1])
            {
                temp=X[j];
                X[j]=X[j+1];
                X[j+1]=temp;
            }
            if(Y[j]>Y[j+1])
            {
                temp=Y[j];
                Y[j]=Y[j+1];
                Y[j+1]=temp;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        diff=abs(Y[i]-X[i]);
        count=count+diff;
    }
    if(count%2==0)
    cout<<count/2;
    else
        cout<<"-1";
    return 0;
}
