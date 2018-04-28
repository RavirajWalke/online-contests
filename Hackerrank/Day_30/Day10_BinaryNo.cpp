#include<iostream>
using namespace std;
int main()
{
    int rem=0,s=0,t=0,n;
    cin>>n;
    while(n>0)
    {
        rem=n%2;
        n=n/2;
        if(rem==1)
        {
              s++;
              if(s>=t)
                 t=s;
        }
        else
            s=0;
    }

    cout<<t;
    return 0;
}
