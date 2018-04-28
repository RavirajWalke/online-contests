/**
 *
 * @author Ravi
 */
#include<iostream>
using namespace std;
int main()
{
    long count,rep=0
    int n,i,j;
    cin>>n;
    int A[n],B[n*(n-1)/2],k=n;
    for(i=0;i<n;i++)
        cin>>A[i];
    for(i=n-1;i>=0;i--)
    {
        count=0
        for(j=i-1;j>=0;j--)
        {
            if(A[i]!=A[j])
            {
                B[count]=abs(A[i]-A[j]);
                count++;
            }
        }
    }
}
