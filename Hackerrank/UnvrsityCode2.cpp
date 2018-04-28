/**
 *
 * @author Ravi
 */
#include<iostream>
using namespace std;
int main()
{
    int n,k,i,j,count=0;
    int max=-1,min=100001;
    cin>>n>>k;
    int a[n],temp[100001];
    for(i=0;i<100001;i++)
        temp[i]=0;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]<min)
            min=a[i];
        if(a[i]>max)
            max=a[i];
        temp[a[i]+1]=1;
    }
     for(i=min;i<max;i++)
     {
         int n1=i+k;
         for(j=n1;j>i;j--)
         {
            if(temp[j]==1)
            {
                count++;
                i=n1+k+1;
            }
        }
     }


    cout<<count;
    return 0;
}
