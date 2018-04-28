#include <iostream>
using namespace std;
int main(){
    int n,i,j,count=0;
    int k;
    cin >> n >> k;
    int a[n];
    for(i = 0;i < n;i++)
       cin >> a[i];
     for(i=0;i<n;i++)
     {
         for(j=i+1;j<n;j++)
         {
             int sum=a[i]+a[j];
             //cout<<sum<<" ";
             if(sum%k==0)
             {
                 count++;
             }

         }
     }
        cout<<count;
    return 0;
}
