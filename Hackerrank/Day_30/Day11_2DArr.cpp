#include<iostream>
using namespace std;
int main()
{
    int a[6][6],i,j,k,l,sum,maxsum=-100;
    for(i=0;i<6;i++)
        for(j=0;j<6;j++)
        cin>>a[i][j];
    for(l=0;l<4;l++)
    {
        for(k=0;k<4;k++)
        {
           sum=0;
           for(i=0;i<3;i++)
           {
              for(j=0;j<3;j++)
              {
                if(i==0||i==2)
                    sum=sum+a[i+l][j+k];
                else if(i==1&&j==1)
                    sum=sum+a[i+l][j+k];
              }
           }
           if(sum>maxsum)
               maxsum=sum;

       }
    }
   cout<<maxsum<<endl;
    return 0;
}
