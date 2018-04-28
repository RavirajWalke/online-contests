#include<stdio.h>
int main()
{
    int i,j,k,N,r,c;
    scanf("%d",&N);
    c=2*N+1;
    int a[c][c];
    for(k=N;k>0;k--)
    {
        r=2*k+1;
        for(i=0;i<r;i++)
        {
          for(j=0;j<r;j++)
          {
            if(i==0||i==r-1||j==0||j==r-1)
            {
                a[i][j]='*';
                //printf("*");
            }
          }
      }
    }
   for(i=0;i<c;i++)
   {
       for(j=0;j<c;j++)
       {
           if(a[i][j]=='*')
           printf("%c",a[i][j]);
           else
            printf(" ");
       }
       printf("\n");
   }

    return 0;
}
