#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int factorial(int n)
{
    if(n==1)
        return n;
    if(n>1)
      {
      return (n*factorial(n-1));
  }
}
int main() {
    int n,fact;
    cin>>n;
    fact=factorial(n);
    cout<<fact;
    return 0;
}
