/*
 * @author RaviRaj96
 */

#include<iostream>
#include<cstdio>
#include<string>
#include<cstdlib>
#include<ctime>
#include<cmath>
#include<vector>
#include<algorithm>
#include <fstream>
using namespace std;

int main()
{
    int T,k;
    cin>>T;
    for(k=0;k<T;k++)
    {
        int i,count=0;
        string s;
        cin>>s;
        int n=s.length();
        for(i=1;i<n;i++)
        {
            if(abs(s[i]-s[i-1])==abs(s[n-i]-s[n-i-1]))
            {
                count++;
            }
            else
                break;
        }
        if(count==n-1)
            cout<<"Funny"<<endl;
        else
            cout<<"Not Funny"<<endl;

    }
    return 0;
}
