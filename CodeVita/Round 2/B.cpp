/*
 * @author RaviRaj96
 */

#include<iostream>
#include<cstdio>
#include<string>
#include<cstdlib>
#include<ctime>
#include<cmath>
#include<vector>
#include<algorithm>
#include <fstream>
using namespace std;
long long fact(long f,long i)
{
    long long j,fa=1;
    for(j=f;j>i;j--)
    {
        fa=fa*j;
    }

    return fa;
}
int main()
{
    long N,K,i=0,j;
    long long c,sum=0;
    cin>>N>>K;
    while(i<=K)
    {
        c=fact(N,i)/fact(N-i,0);
        sum=sum+c;
        i=i+2;
    }
    cout<<sum;
    return 0;
}
