#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n,k,i,j;
    long sum=0;
    cin>>n>>k;
    int p[n],d[n];
    for(i=0;i<n;i++)
    {
        cin>>p[i]>>d[i];
        sum=sum+p[i];
    }
     mergesort(a,0,n-1);
    for(i=0;i<n-k;i++)
    {
        sum=sum-(p[i]+d[i]);
    }
    cout<<sum;
    return 0;
}
