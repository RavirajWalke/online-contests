#include<stdio.h>
void main()
{
	int i,j,k,N;
	scanf("%d",&N);
	for(i=N;i>0;i--)
	    {
		   for(k=1;k<i;k++)
			  printf(" ");
		   for(j=N;j>=i;j--)
		   {
			   printf("#");
		   }
		   printf("\n");
	    }
}