/**
 *
 * @author Ravi
 */
#include<iostream>
using namespace std;
int main()
{
    int T,Q,N,i,j,te,k,c,count;
    cin>>T;
    for(te=0;te<T;te++)
    {
        cin>>N>>Q;
        int L[N];
        for(i=0;i<N;i++)
        {
            cin>>L[i];
        }

        for(j=0;j<Q;j++)
        {
            c=0;count=0;
            cin>>k;
            for(i=0;i<N;i++)
            {
                if(L[i]<=k)
                    c++;
            }
            cout<<c<<" ";
            for(i=0;i<N;i++)
            {
                if(L[i]+c>=k)
                    count++;
            }
            cout<<count<<endl;
        }
    }
    return 0;
}
