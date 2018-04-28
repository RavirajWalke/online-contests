#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int t,i,j,k,T,m,n,min,sum=0,Temp[1000],tem;
    scanf("%d",&T);
    for(t=0;t<T;t++)
    {
        scanf("%d%d",&m,&n);
        int M1[n],M2[n],D[n];
        for(i=0;i<n;i++)
         {
            scanf("%d%d",&M1[i],&M2[i]);
        }
        for(i=0;i<n;i++)
        {
             if(R==1)
             {
                if(i==0)
                    D[i]=fabs(M1[i]-M2[i]);
                else
                   D[i]=fabs(M2[i-1]-M1[i])+fabs(M1[i]-M2[i]);
              }
                if(R==2)
                    if(i==0)
                    D[i]=fabs(M1[i]-M2[i]);
                else
                {
                   D[i]=fabs(M2[i-1]-M1[i])+fabs(M1[i]-M2[i]);
                }
            }

           
        }
            sum=sum+D[j];
        }
    }
    printf("%d\n",sum );
    return 0;
}