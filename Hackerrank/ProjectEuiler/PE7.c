#include<math.h>
#include<stdio.h>
void main()
{
	int T,k;
  scanf("%d",&T);
  for(k=0;k<T;k++)
  {
    unsigned long N,i,j,count=0,temp;
	scanf("%d",&N);
    for(i=2;i<=1000000000;i++)
    {
    	temp=0;
       for(j=2;j<=sqrt(i);j++)
       {
       	if(i%j==0)
       	{
       	   temp=1;
       	break;
       	}
       }
       if(temp==0)
       {
       	count++;
       }
       if(count==N)
       {
       	  printf("%uth prime number is %u\n",N,i );
       	  break;
       }
    }
  }
}