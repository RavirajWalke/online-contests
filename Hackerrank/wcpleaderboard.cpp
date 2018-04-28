/**
 *
 * @author Ravi
 */
#include<iostream>
using namespace std;
int main()
{
 int n,m,i,j,count=1;
 cin>>n;
 int s[n+1],pos[n+1];
 for(i=0;i<n;i++)
    cin>>s[i];
 cin>>m;
 int a[m];
 for(i=0;i<m;i++)
    cin>>a[i];
int aval,apos;
for(j=0;j<n;j++)
{
    pos[j]=count;
    count++;
    if(s[j]==s[j+1])
    {
        count--;
        //cout<<s[j]<<" "<<count<<endl;
    }
}
for(i=0;i<m;i++)
{
    aval=a[i];
    for(j=n-1;j>=0;j--)
    {
        if(s[j]>aval)
        {
            apos=pos[n-1]+1;
        }
    }
}

for(j=0;j<n;j++)
{
    cout<<s[j]<<" "<<pos[j]<<endl;
}
 return 0;
}
