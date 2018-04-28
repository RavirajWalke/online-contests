/**
 *
 * @author Ravi
 */
#include<iostream>
using namespace std;
int main()
{
 int n,k,i,j,max=-100001,maxi,sum=0;
 cin>>n>>k;
 int a[n],b[n];
 for(i=0;i<n;i++)
 {
     cin>>a[i];
 }
 for(i=0;i<n;i++)
 {
     cin>>b[i];
     if(b[i]>max)
     {
         max=b[i];
         maxi=i;
     }
 }
 a[maxi]-=k;
 for(i=0;i<n;i++)
 {
     sum+=a[i]*b[i];
 }
 cout<<sum;
 return 0;
}
