#include<iostream>
using namespace std;
int add(int i,int j,int k=5)//default arguments should be from right to left
{
    int sum=i+j+k;
    return(sum);
}
int main(void)
{
    int sum;
    sum=add(10,20);
    cout<<"sum is:"<<sum;
}

