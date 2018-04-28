#include<stdio.h>
#include<math.h>
void main()
{
	int i,T,l,b,sq=0,n=0;
	scanf("%d",&T);
	while(T>0)
	{
	   scanf("%d%d",&l,&b);
	   for(i=1;i<fmin(l,b);i++)
	   {
	   	 if(l==b)
	   	 {
	   	 	sq=1;
	   	 	n=1;
	   	 	break;
	   	 }
	   	 else
	   	 {
	   	 	if((l*b)%(i*i)==0)
	   	 	n=(l*b)/(i*i);
	   	 }
	   	 if(n!=0)
	   	 	sq=n;
	   }
	   printf("%d\n",sq);
	   T--;
	}

}