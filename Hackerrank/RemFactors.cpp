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
    long long N,i,r,count=0;
    cin>>N;
    for(i=2;i<N;i++)
    {
        r=N%i;
        if(r*r%i==0&&N%i!=0)
        {
           // cout<<i<<" ";
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}
//@author:raviraj96
