/*
 * @author RaviRaj96
 */

#include<iostream>
using namespace std;
void InsertionSort(int a[],int low,int high)
{
    int key,i,j;
    for(i=low+1;i<high;i++)
    {
        key=a[i];
        j=i-1;
        while(j>=0&&a[j]>key)
        {
            a[j+1]=a[j];
            j=j-1;
        }
        a[j+1]=key;
    }
}

int main()
{
    int te,T;
    cin>>T;
    for(te=0;te<T;te++)
    {
        int N,i,j;
        long long sum=0,sum1=0;
        cin>>N;
        int c[N],key;
        for(i=0;i<N;i++)
        {
            cin>>c[i];
        }
        if(N==1)
        {
            cout<<c[0];
            return 0;
        }
        InsertionSort(c,0,N);
        for(i=1;i<N;i++)
        {
            sum=c[i-1]+c[i];
            c[i]=sum;
            c[i-1]=-1;
            sum1=sum1+sum;
            InsertionSort(c,i,N);
        }
        if(N!=1)
        cout<<sum1<<endl;
    }
    return 0;
}
