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
    int N,K,i,j,a,b,sum1=0,count=0;
    cin>>N>>K;
    int L[N];
    for(i=0;i<N;i++)
    {
        cin>>a>>b;
        if(b==1)
        {
            L[count]=a;
            count++;
        }
            sum1=sum1+a;
    }
    for(i=0;i<count;i++)
    {
        int key=L[i];
        j=i-1;
        while(j>=0&&L[j]>key)
        {
           L[j+1]=L[j];
           j--;
        }
        L[j+1]=key;
    }
    for(i=0;i<count-K;i++)
    {
        //cout<<L[i]<<" ";
        sum1=sum1-2*L[i];
    }
    cout<<sum1;
    return 0;
}
