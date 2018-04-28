#include<stdio.h>
void main()
{
	int n,i;
	float pos=0,neg=0,zer=0;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]>0)
			pos++;
		else if(a[i]<0)
			neg++;
		else if(a[i]==0)
			zer++;
	}
	printf("%f\n",pos/n);
	printf("%f\n",neg/n);
	printf("%f\n",zer/n);
}