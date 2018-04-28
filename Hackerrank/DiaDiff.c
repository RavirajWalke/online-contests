#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int i,j,n,sum1=0,sum2=0,sum; 
    scanf("%d",&n);
    int a[n][n];
    for(i=0;i<n;i++)
    {
       for(j=0;j<n;j++)
       {
          scanf("%d",&a[i][j]);
          if(i==j)
          sum1=sum1+a[i][j];
           if(i+j==(n-1))
           	sum2=sum2+a[i][j];
       }
    }
     sum=fabs(sum1-sum2);
       printf("%d",sum);
      // printf("%d",fabs(sum1,sum2));
    return 0;
}
