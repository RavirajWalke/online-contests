/**
 *
 * @author Ravi
 */
#include <iostream>
using namespace std;
bool thisa(int* a,int size,int n)
    {
    bool all=true;
    for(int i=0;i<size;i++)
        {
        if(n%a[i]!=0)
            {
            all=false;
            break;
        }
    }
    return all;
}
bool thisb(int* b,int size,int n)
    {
    bool all=true;
    for(int i=0;i<size;i++)
        {
        if(b[i]%n!=0)
            {
            all=false;
            break;
        }
    }
    return all;
}

int main()
{
    int n,m;
    cin>>n>>m;
    int a[n],b[m],i,max=-100,min=1000;
    for(i=0;i<n;i++)
        {
        cin>>a[i];
        if(a[i]>max)
            max=a[i];
    }
    for(i=0;i<m;i++)
        {
        cin>>b[i];
        if(b[i]<min)
            min=b[i];
    }
    int count=0;
    for(i=max;i<=min;i++)
        {
        if(thisa(a,n,i))
            {
            if(thisb(b,m,i))
                {
                count++;
            }
        }
    }
    cout<<count;
    return 0;
}
