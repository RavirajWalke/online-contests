/**
 *
 * @author Ravi
 */
#include<iostream>
using namespace std;
int main()
{
    int n,m,i,j;
    cin>>n>>m;
    int a[m][n];
    for(i=0;i<n;i++)
        cin>>a[0][i];
    for(i=1;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(j<n-1)
                a[i][j]=a[i-1][j]^a[i-1][j+1];
            else
            a[i][j]=a[i-1][j]^a[i-1][0];
        }
    }
    for(i=0;i<n;i++)
        cout<<a[m-1][i]<<" ";
    return 0;
}
