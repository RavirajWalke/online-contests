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
void merge(int a[],int low,int mid,int high)
{
    int n1=mid-low+1;
    int n2=high-mid;
    int le[n1],ri[n2];
    for(int l=0;l<n1;l++)
        le[l]=a[low+l];
    for(int r=0;r<n2;r++)
        ri[r]=a[mid+r+1];
    ri[n2]=10000;le[n1]=10000;
    int i=0,j=0;
    for(int k=low;k<=high;k++)
    {
        if(le[i]<=ri[j])
        {
            a[k]=le[i];
            i++;
        }
        else
        {
            a[k]=ri[j];
            j++;
        }
    }
}

void mergesort(int a[],int low,int high)
{
    int mid;
    if(low<high)
    {
        mid=(low+high)/2;
        mergesort(a,0,mid);
        mergesort(a,mid+1,high);
        merge(a,low,mid,high);
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
        mergesort(c,0,N-1);
        for(i=1;i<N;i++)
        {
            sum=c[i-1]+c[i];
            c[i]=sum;
            c[i-1]=-1;
            sum1=sum1+sum;
            mergesort(c,i,N-1);
        }
        cout<<sum1<<endl;
    }
    return 0;
}
