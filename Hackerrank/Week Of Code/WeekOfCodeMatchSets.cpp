/*
 * @author RaviRaj96
 */

#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<ctime>
#include<cmath>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int n,i,j,count=0,diff,diff2;
    cin>>n;
    int X[n],Y[n];
    for(i=0;i<n;i++)
        cin>>X[i];
    for(i=0;i<n;i++)
        cin>>Y[i];
    for(i=0;i<n-1;i++)
    {
         diff=X[i]-Y[i];
         if(diff<0)
            break;
         else if(diff==0)
            continue;
         else
         {
            for(j=i+1;j<n;j++)
            {
                diff2=Y[j]-X[j];
                if(diff2<=0)
                    continue;
                else
                {
                        if(diff2<diff)
                        {
                            count=count+diff2;
                            diff=diff-diff2;
                            X[i]=X[i]-diff2;
                            X[j]=X[j]+diff2;
                            continue;
                        }
                        if(diff2==diff)
                        {
                            count=count+diff2;
                            diff=diff-diff2;
                            X[i]=X[i]-diff2;
                            X[j]=X[j]+diff2;
                        }
                }
            }
        }
    }
    if(diff!=0)
        cout<<"-1";
    else
        cout<<count;
    return 0;
}
