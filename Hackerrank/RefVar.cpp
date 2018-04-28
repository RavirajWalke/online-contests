#include<iostream>
using namespace std;
int main(void)
{
    int a=10;
    int &ref=a;//reference variable is used to point to same location of variable to which it is intialised.
    cout<<a<<" "<<ref<<endl;
    cout<<&a<<" "<<&ref;
}
