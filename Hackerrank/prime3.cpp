#include<iostream>
#include <bits/stdc++.h>
using namespace std;
void simpleSieve(int m,int limit, vector<int> &prime)
{
    bool mark[limit+1];
    memset(mark, true, sizeof(mark));

    for (int p=2; p*p<limit; p++)
    {
        if (mark[p] == true)
        {
            for (int i=p*2; i<limit; i+=p)
                mark[i] = false;
        }
    }
    for (int p=m; p<limit; p++)
    {
        if (mark[p] == true)
        {
            prime.push_back(p);
            cout << p << "  ";
        }
    }
}
void segmentedSieve(int m,int n)
{
    int limit = floor(sqrt(n))+1;
    vector<int> prime;
    simpleSieve(m,limit, prime);
    int low  = limit;
    int high = 2*limit;
    while (low < n)
    {
        bool mark[limit+1];
        memset(mark, true, sizeof(mark));
        for (int i = 0; i < prime.size(); i++)
        {
            int loLim = floor(low/prime[i]) * prime[i];
            if (loLim < low)
                loLim += prime[i];
            for (int j=loLim; j<high; j+=prime[i])
                mark[j-low] = false;
        }
        for (int i = low; i<high; i++)
            if (mark[i - low] == true)
                cout << i << "  ";
        low  = low + limit;
        high = high + limit;
        if (high >= n) high = n;
    }
}
int main()
{
    int n,m;
    cin>>m>>n;
    segmentedSieve(m,n);
    return 0;
}
