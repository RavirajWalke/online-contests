/**
 *
 * @author Ravi
 */
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int T,te,n,a,b,l,i,j,min=1000000001,mini;
    cin>>T;
    for(te=0;te<T;te++)
    {
        cin>>n>>l>>a>>b;
        int s[n];
        for(i=0;i<n;i++)
        {
            cin>>s[i];
            if(abs(a-s[i])<min)
            {
                min=abs(a-s[i]);
                mini=i;
            }
        }
        //cout<<mini;

    }
    return 0;
}
