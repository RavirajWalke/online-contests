/**
 *
 * @author Ravi
 */
#include<iostream>
using namespace std;
int main()
{
    int s,N,i,j,k,c;
    cin>>s;
    for(j=0;j<s;j++)
    {
        cin>>N;
        int h[N];
        for(i=0;i<N;i++)
        {
            cin>>h[i];
        }
        if(N%2==0)
        {
            cout<<"no\n";
            continue;
        }
        k=N/2+1;
        c=0;
        //cout<<k<<endl;
        for(i=0;i<N;i++)
        {
            if(i<k)
            {
                c++;
                if(h[i]!=c)
                {
                    //cout<<i;
                    cout<<"no\n";
                    break;
                }
            }
            else
            {
                c--;
                if(h[i]!=c)
                {
                    cout<<"no\n";
                    break;
                }
            }
        }
        if(i==N)
            cout<<"yes\n";
        }
    return 0;
}
