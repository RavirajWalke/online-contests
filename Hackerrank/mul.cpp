#include<iostream>
using namespace std;
int mul(int x[],int n)
{
    int val=1;
    for(int i=0;i<n;i++)
        val=val*x[i];
    return val;
}
int main()
{
    int x[10];
    cout<<"Enter 10 numbers"<<endl;
    for(int i=0;i<10;i++)
    {
        cin>>x[i];
    }
    cout<<"Multiplication is"<<mul(x,10);

}
