#include<iostream>
#include<cmath>
using namespace std;
int main(void)
{
    int T,i,K;
    cin>>T;
    for(K=0;K<T;K++)
    {
        long long sum=0;
        int N,j;
        cin>>N;
        int c=0;
            for(i=1;c<N;i++)
			{
				for(j=0;j<i&&c<N;j++)
				{
					long long a=pow(2,i)+pow(2,j);
					sum=sum+a;
					c++;
				}
			}
			sum=sum%1000000007;
			cout<<sum<<endl;
    }
    return 0;
}
