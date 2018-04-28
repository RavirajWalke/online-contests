#include<stdio.h>
struct S
{
	unsigned long x;
	unsigned long y;
};
int main()
{
	unsigned long C,M,i,n,j,k=0,count=0;
	scanf("%u%u%u",&C,&M,&n);
	unsigned long a[n];
	unsigned long sp[n];
	struct S v[n];
	a[0]=0,a[1]=C;
	for(i=0;i<2*n;i++)
	{
	    a[i+2]=(a[i+1]+a[i])%M;
	}
	for(i=1;i<=n;i++)
	{
	    v[i].x=a[2*i];
	    v[i].y=a[2*i+1];
	}
	k=0;
	for(i=1;i<=n;i++)
	{
		for(j=i+1;j<=n;j++)
		{
			sp[k]=((v[i].x*v[j].x)+(v[i].y*v[j].y))%M;
			k++;
		}
	}
	for(i=0;i<k;i++)
	{
		for(j=i+1;j<k;j++)
		{
			if(sp[i]==sp[j])
				sp[i]=-1;
		}
	}
	for(i=0;i<k;i++)
	{
		if(sp[i]!=-1)
		count++;
	}
	printf("%u",count);
	return 0;
}
