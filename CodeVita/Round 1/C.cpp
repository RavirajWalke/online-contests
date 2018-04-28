#include<iostream>
#include<stdlib.h>
using namespace std;
int main(void)
{
    long i,T;
    cin>>T;
    for(i=0;i<T;i++)
    {
        long long M,N,G;
        cin>>M>>N;
        if(llabs(M-N)>M||llabs(M-N)>N)
            G=-1;
        else if(llabs(M-N)==0)
            G=1;
        else
            G=llabs(M-N);
        cout<<G<<endl;
    }
    return 0;
}
