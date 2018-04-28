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
        int diff=0,mindiff=10000,si,ei,f;
        for(i=1;i<N;i++)
        {
           f=0;
            for(j=i+1;j<=N&&f==0;j++)
            {
                p=a[j]-a[i];
                if(p==b[k])
                {
                    diff=j-i;
                    if(diff<mindiff)
                    {
                        mindiff=diff;
                        si=i;
                        ei=j;
                    }
                    f=1;
                }
            }
        }
        if(diff==0)
              cout<<-1;
        else
            cout<<si<<" "<<ei<<endl;
    }
    return 0;
}
//@author:raviraj96
