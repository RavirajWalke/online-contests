/**
 *
 * @author Ravi
 */
#include<iostream>
#include <algorithm>
using namespace std;
int main()
{
 int i,j,k,R,L;
 string str;
 cin>>R;
 for(i=0;i<R;i++)
 {
     cin>>L;
    cin>>str;
    str.erase(std::remove(str.begin(), str.end(), '.'), str.end());
    for(j=0;j<str.length();j++)
    {
        if(str[0]=='T')
        {
            cout<<"Invalid\n";
            break;
        }
        if(str[str.length()-1]!='T')
        {
            cout<<"Invalid\n";
            break;
        }
        if(j%2==0)
        {
            if(str[j]!='H')
            {
                cout<<"Invalid\n";
                break;
            }
        }
        else
        {
            if(str[j]!='T')
            {
                cout<<"Invalid\n";
                break;
            }
        }
    }
    if(j==str.length())
        cout<<"Valid\n";
    //cout<<str.length();
 }


 return 0;
}
