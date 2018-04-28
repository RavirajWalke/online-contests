/**
 *
 * @author Ravi
 */
#include<iostream>
using namespace std;
int main()
{
 int N,i,j,k=3,l=1;
 cin>>N;

 for(i=1;i<=N;i++)
 {
     for(j=1;j<=i;j++)
     {
         int s=(l*2)*k;
         printf("%05d ",s);
         l++;
         k+=4;
     }
     cout<<"\n";
 }
 return 0;
}
