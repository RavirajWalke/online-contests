/**
 *
 * @author Ravi
 */
#include <iostream>
using namespace std;
int main()
{
    string a,b;
    int k,i,x;
    cin>>a>>b>>k;
    if(a.length()<=b.length())
        {
        for(i=0;i<a.length();i++)
            {
            if(a[i]!=b[i])
                break;
        }
        x=a.length()-i;
        x=x+(b.length()-i);
            if(k>=x)
            {
            x=k-x;
            if(x==0)
                cout<<"Yes";
            else
            {
                if(x%2==0||x>2*i)
                    cout<<"Yes";
                else cout<<"No";
            }
        }
        else cout<<"No";
    }
    else
        {
        for(i=0;i<b.length();i++)
            {
            if(a[i]!=b[i])
                break;
        }
        x=a.length()-i;
        x=x+(b.length()-i);
        if(k>=x)
            {
            if((k-x)%2==0)
                cout<<"Yes";
            else cout<<"No";
        }
        else cout<<"No";
    }
}
