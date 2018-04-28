#include<iostream>
using namespace std;
int main()
{
    long long n1,n2,n3,i,j,k,h1=0,h2=0,h3=0,count=0;
    cin>>n1>>n2>>n3;
    long a[n1],b[n2],c[n3];
    for(i=0;i<n1;i++)
    {
        cin>>a[i];
        h1=h1+a[i];
    }
    for(j=0;j<n2;j++)
    {
        cin>>b[j];
        h2=h2+b[j];
    }
    for(k=0;k<n3;k++)
    {
        cin>>c[k];
        h3=h3+c[k];
    }
    i=0;j=0;k=0;
    while(h1>=0||h2>=0||h3>=0)
    {
        count++;
        if(h1==h2&&h2==h3)
            break;
        else if(h1>h2&&h1>h3)
        {
             h1=h1-a[i];
             i++;
        }
        else if(h2>h1&&h2>h3)
        {
            h2=h2-b[j];
            j++;
        }
        else
        {
            h3=h3-c[k];
            k++;
        }

    }
    cout<<h1;
    return 0;
}
