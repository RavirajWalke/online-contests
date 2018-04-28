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
    int N,D;
    cin>>N>>D;
    int a[N],b[D],i,j,k,p;
    for(i=1;i<=N;i++)
        cin>>a[i];
    for(i=1;i<=D;i++)
        cin>>b[i];
    for(k=1;k<=D;k++)
    {
        for(i=2;i<N;i++)
        {
            for(j=i;j>=0;j--)
            {
                p=a[j]-a[i];
                if(p==b[k])
                {

                }
        }

    }
    return 0;
}
//@author:raviraj96
