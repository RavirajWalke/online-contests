/**
 *
 * @author Ravi
 */
#include<iostream>
using namespace std;
int main()
{
    int T,te,i,j,c,n;
    string s;
    cin>>te;
    for(T=0;T<te;T++)
    {
        cin>>s;
        n=s.length();
        int ns=0,nm=0;
        for(i=0;i<n;i++)
        {
            if(s[i]=='s')
                ns++;
            if(s[i]=='m')
            {
                nm++;
                if(s[i-1]=='s'||s[i+1]=='s')
                {
                    ns--;
                }
            }
        }
        //cout<<ns<<" "<<nm<<endl;
        if(ns==nm)
            cout<<"tie\n";
        else if(ns>nm)
            cout<<"snakes\n";
        else
            cout<<"mongooses\n";
    }
    return 0;
}
