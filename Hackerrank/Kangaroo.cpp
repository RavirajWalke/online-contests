#include<iostream>
int kan(long x1,long x2,long v1,long v2)
{
    if(x1==x2)
        return 1;
     else if((x2>x1&&v2>=v1)||(x1>x2&&v1>=v2))
        return 0;
    else{
        x2=x2+v2;
        x1=x1+v1;
        return(kan(x1,x2,v1,v2));
    }
}
using namespace std;
int main(void)
{
    long x1,x2,v1,v2;
    cin>>x1>>v1>>x2>>v2;
    int n;
    n=kan(x1,x2,v1,v2);
    if(n==0)
        cout<<"NO";
    else if(n==1)
        cout<<"YES";
}
