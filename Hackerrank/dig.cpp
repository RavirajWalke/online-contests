/**
 *
 * @author Ravi
 */
#include<iostream>
using namespace std;
int main()
{
    int i=6;
 int temp=i,sum1=0;
            int rem=temp%10;
            while(rem!=0)
            {
                sum1=sum1+rem;
                temp=temp/10;
                rem=temp%10;
            }
            cout<<sum1;
 return 0;
}
