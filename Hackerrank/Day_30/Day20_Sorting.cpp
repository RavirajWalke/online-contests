#include<iostream>
using namespace std;
int main()
{
   int i,j,n,temp,swaps=0;
   cin>>n;
   int a[n];
   for(i=0;i<n;i++)
      cin>>a[i];
   for(i=0;i<n;i++)
   {
       for(j=0;j<n-i-1;j++)
       {
           if(a[j]>a[j+1])
           {
               swaps++;
               temp=a[j];
               a[j]=a[j+1];
               a[j+1]=temp;
           }
       }
   }
    cout<<"Array is sorted in "<<swaps<<" swaps"<<endl;
    cout<<"First Element: "<<a[0]<<endl;
    cout<<"Last Element: "<<a[n-1]<<endl;
    return 0;
}
