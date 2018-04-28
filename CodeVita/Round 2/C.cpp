/*
 * @author RaviRaj96
 */

#include<iostream>
#include<cstdio>
#include<string>
#include<cstdlib>
#include<ctime>
#include<cmath>
#include<vector>
#include<algorithm>
#include <fstream>
using namespace std;
int partition(int a[],int low,int high)
{
    int i,j,temp,pivot=a[low];
    i=low;
    for(j=low+1;j<=high;j++)
    {
        if(a[j]<pivot)
        {
            i=i+1;
            temp=a[j];
            a[j]=a[i];
            a[i]=temp;
        }
    }
    temp=a[i];
    a[i]=a[low];
    a[low]=temp;
    return(i);
}
void QuickSort(int a[],int low,int high)
{
    if(low<high)
    {
        int ele=partition(a,low,high);
        QuickSort(a,low,ele-1);
        QuickSort(a,ele+1,high);
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
        QuickSort(c,0,N-1);
        for(i=1;i<N;i++)
        {
            sum=c[i-1]+c[i];
            c[i]=sum;
            c[i-1]=-1;
            sum1=sum1+sum;
            QuickSort(c,i,N-1);
        }
        cout<<sum1<<endl;
    }
    return 0;
}
