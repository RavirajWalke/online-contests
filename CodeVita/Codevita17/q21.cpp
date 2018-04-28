#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int t,T;
    cin>>T;
    for(t=0;t<T;t++)
    {
       int np,nw,sum=0,q,x;
       cin>>np>>nw;
       x=np;
       do{
       q=(np+nw)/7;
       nw=(np+nw)%7;
       np=q;
       sum+=np;
       }
       while(np+nw>7);
       cout<<x+sum<<endl;
    }
    return 0;
}
