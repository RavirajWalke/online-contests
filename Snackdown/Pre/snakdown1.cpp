/**
 *
 * @author Ravi
 */
#include<iostream>
using namespace std;
int main()
{
    int T,te,n,i,j,m,u,v;
    cin>>T;
    for(te=0;te<T;te++)
    {
        cin>>n>>m;
        for(i=0;i<m;i++)
        {
            cin>>u>>v;
        }
        if(n%2==0)
            cout<<"yes\n";
        else
            cout<<"no\n";
    }
    return 0;
}
