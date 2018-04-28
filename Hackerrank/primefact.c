//Prime factor of a number in c

#include<stdio.h>
int main()
{
  int num,i=1,j,k,l=0;
  printf("\nEnter a number:");
  scanf("%d",&num);
  while(i<=num)
  {
      k=0;
      if(num%i==0)
      {
         j=1;
          while(j<=i)
          {
            if(i%j==0)
                 k++;
             j++;
          }
          if(k==2)
          {
            //a[l]=i;
            l=i;
             //printf("\n%d is a prime factor",i);  
          }
      }
      i++;
   }
   printf("\n%d",l);
   return 0;
}