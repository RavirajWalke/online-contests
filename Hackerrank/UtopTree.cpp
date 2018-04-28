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
    int T,i;
    cin>>T;
    for(i=0;i<T;i++)
    {
        int N,j,H=1;
        cin>>N;
        if(N>0)
        for(j=0;j<N;j++)
        {
            if(j%2==0)
                H=2*H;
            else
                H=H+1;
        }
        cout<<H;
    }
    return 0;
}
