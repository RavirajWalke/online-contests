#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
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

int main() {
    int i,T;
    cin>>T;
    for(i=0;i<T;i++)
    {
        int N,j=0,q,r,count,M=0,k,p=0,arg;
        cin>>N;
//****************TO FIND DIFF CONFIGURATIONS OF BRICK ARRG*************************
        q=N/4;
        while(j<=q)
        {
            count=N-(4*j)+j;
            arg=fact(count,j)/fact(count-j,0);
            //cout<<arg<<endl;
           M=M+arg;
            j++;
        }
        cout<<M<<endl;
//**********************************************************************************


//***************NO OF PRIME NUMBERS UPTO M ****************************************
      for(k=2;k<=M;k++)
      {
          r=0;
        for(j=2;j<=sqrt(k);j++)
        {
            if(k%j==0)
                r++;
             //cout<<k<<endl;
        }
        if(r==0)
        {
            p++;
           //cout<<k<<" "<<p<<endl;
        }
      }
//*********************************************************************************
       cout<<p<<endl;
    }
    return 0;
}
