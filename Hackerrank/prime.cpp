/**
 *
 * @author Ravi
 */
#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long n,m,count=0,temp,num1=-1;
    cin>>m>>n;
     bool prime[n+1];
    memset(prime, true, sizeof(prime));
    for (long p=2; p*p<=n; p++)
    {
        if (prime[p] == true)
        {
            for (long i=p*2; i<=n; i += p)
                prime[i] = false;
        }
    }
    for (long p=m; p<=n; p++)
       if (prime[p])
       {
           //cout << p << " ";
           temp=num1;
           num1=p;
           if(abs(num1-temp)==2)
           {
               count++;
               cout<<endl<<temp<<" "<<num1<<endl;
           }

       }
    cout<<count;
    return 0;
}
