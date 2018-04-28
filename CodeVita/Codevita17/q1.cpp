#include<iostream>
#include<cmath>
using namespace std;
long fact(int n)
{
    long f=1;
    for(int i=1;i<=n;i++)
    {
        f=f*i;
    }
    return(f);
}
int main()
{
    int t,T;
    long long sum=0;
    cin>>T;
    for(t=0;t<T;t++)
    {
        long long r,num=0,rem;
        int q;
        cin>>r;
        int a[10]={0,1,2,3,4,5,6,7,8,9};
        int b[10]={0,0,0,0,0,0,0,0,0,0};
        for(int i=0;i<10;i++)
        {
            rem=r%fact(10-(i+1));
            q=r/fact(10-(i+1));
            if(rem==0)
            {
                rem=r-(q-1)*fact(10-(i+1));
                q=q-1;
            }
            //0cout<<q<<" "<<rem<<endl;
            b[i]=a[q];
            for(int j=q;j<9;j++)
                a[j]=a[j+1];
            //for(int k=0;k<10;k++)
              //  cout<<a[k]<<" ";
            r=rem;
        }
        for(int i=0;i<10;i++)
        {
            num=num+(b[i]*pow(10,10-i-1));
        }
        //num=pow(10,10);
        num=num+1;
        if(b[0]==0)
            num=num+1;
        sum=sum+num;
        //cout<<num<<endl;

    }
    cout<<sum;
    return 0;
}
