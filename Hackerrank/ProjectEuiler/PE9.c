#include<stdio.h>
void main()
{
	int T,i;
	scanf("%d",&T);
	for(i=0;i<T;i++)
	{
		int N,a,b,c,j,count=-1;
		scanf("%d",&N);
		long p,p1[N];
		for(a=1;a<N-2;a++)
		{
			for(b=a+1;b<N-a-1;b++)
			{
				c=N-(a+b);
				if(c*c==(a*a+b*b)){
					p=a*b*c;
					count++;
				    p1[count]=p;
				//printf("%d\n",p );
				}
				else
					p=0;
			}
		}
		if(count==0)
			printf("%ld\n",p1[0]);
		if(count==-1)
		{
			p=-1;
			printf("%d\n",p);
		}
		else
		{
		   for(j=1;j<count;j++)
		   {
					if(p1[j]>=p1[j-1])
						p1[j-1]=-2;
					else
					{
						p1[j]=p1[j-1];
						p1[j-1]=-2;
					}
			if(p1[j]!=-2)
				printf("%d\n",p1[j] );
		}
	}
	}
}