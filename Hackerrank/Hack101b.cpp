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
    int i,n,m,b,j,sum=0;
    cin>>n;
    int h[n];
    for(i=0;i<n;i++)
        cin>>h[i];
    cin>>m;
    int a[m];
    for(i=0;i<m;i++)
        cin>>a[i];
    QuickSort(a,0,m-1);

    for(i=0;i<m;i++)
    {
        b=a[i];
        for(j=0;j<b-1;j++)
        {
            if(h[j]>=b-j-1)
                h[j]=b-j-1;
        }
    }
    for(i=0;i<n;i++)
    {
        sum=sum+h[i];
        cout<<h[i]<<" ";
    }
    cout<<endl<<sum<<endl;
    return 0;
}
