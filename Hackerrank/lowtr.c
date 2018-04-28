#include<stdio.h>
void main()
{
  int a[10][10],i,j,n,sum=0;
  printf("enter the order of matrix");
  scanf("%d",&n);
  printf("enter the matrix");
  for(i=0;i<n;i++)
  for(j=0;j<n;j++)
  scanf("%d",&a[i][j]);
  printf("matrix\n");
  for(i=0;i<n;i++)
  {
  for(j=0;j<n;j++)
  printf("%d ",a[i][j]);
  printf("\n");
  }
  printf("Lower triangular matrix is\n");
  for(i=0;i<n;i++)
  {
  for(j=0;j<n;j++)
  {
   if(i<j)
   {
    a[i][j]=0;
   }
  }
  }
  
   for(i=0;i<n;i++)
  {
  for(j=0;j<n;j++)
  printf("%d ",a[i][j]);
  printf("\n");
  }
  
  for(i=0;i<n;i++)
  {
  for(j=0;j<n;j++)
  {
   if(i>j)
   {
    sum=sum+a[i][j];
   }
  }
  }
  printf("sum of lowerrtriangular matrix is %d\n",sum);
  }
