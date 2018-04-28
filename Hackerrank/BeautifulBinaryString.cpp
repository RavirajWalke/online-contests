/*
 * @author RaviRaj96
 */
#include <iostream>
#include <cmath>
#include <string>
#include <cstring>
#include <cstdlib>
#include <algorithm>
#include <ctime>
#include <cctype>
using namespace std;
using std::string;
int main()
{
    int n,i,j,count=0;
    cin>>n;
    char B[n];
    cin>>B;
    string a(B,0,n);
    string s("010");
    j=a.find(s);
    while(j!=string::npos)
    {
        count++;
        j=j+3;
    }
    cout<<count;
    return 0;
}
