/*
 * @author RaviRaj96
 */

#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<ctime>
#include<cmath>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int m,n,i=0;
    cin>>m>>n;
    if(n%m==0)
        cout<<"0";
    else
        cout<<m-(n%m);
    return 0;
}
