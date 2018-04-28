#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int t,T;
    cin>>T;
    for(t=0;t<T;t++)
    {
       int np,nw,sum,q,x;
       cin>>np>>nw;

       q=np-7+nw/7+1;
       x=q/6;
       sum=x*7+7+q%6;
       cout<<sum<<endl;
    }
    return 0;
}
