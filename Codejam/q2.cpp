/**
 *
 * @author Ravi
 */
 #include<stdio.h>
#include <iostream>
#include <sstream>
#include <string>
using namespace std;
int main()
{
    int t,te;
    cin>>t;
    for(te=0;te<t;te++)
    {
        int N,i,j;
        cin>>N;
        ostringstream oss;
        oss<< N;
        string Num=oss.str();
        //cout<<Num;
        for(i=0;i<Num.length;i++)
        {
            if(Num[i]>Num[i+1])
            {

            }
        }

    }
    return 0;
}
