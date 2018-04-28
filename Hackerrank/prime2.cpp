#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n,m,i,j,num1=-1,temp,count=0;
    cin>>n>>m;
    int flag;
    while (n<=m)
    {
        flag=0;
        for(i=2;i<=n/2;++i)
        {
            if(n%i==0)
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
            {
            temp=num1;
            num1=n;
            if(abs(num1-temp)==2)
                {
                count++;
            }
        }
        ++n;
    }
    cout<<count;
    return 0;
}
