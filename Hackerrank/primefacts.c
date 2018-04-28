#include<stdio.h>
void main()
{
	int n,i=2,j=0,k,a[100];
	printf("enter value of n\n");
	scanf("%d",&n);
	printf("prime factors of %d are",n);
	while(n!=1)
	{
		if(n%i==0)
		{
			a[j]=i;
			j++;
			n=n/i;
		}
		i++;
	}
	for(k=0;k<j;k++)
	{
         
		printf("%d ",a[k]);
	}
}