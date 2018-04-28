#include<stdio.h>
#include<math.h>
int main()
{
	int i,T;
	scanf("%d",&T);
	for(i=0;i<T;i++)
	{
		int a,b,x,c,d,e,f,g;
		scanf("%d%d%d",&a,&b,&x);
		c=pow(a,b);
		d=c%x;
		e=(c/x+1)*x;
		f=c-d;
		g=e-c;
		if(d>=g)
			printf("%d\n",e);
		else
			printf("%d\n",f);
	}
}