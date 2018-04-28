#include<stdio.h>
void main()
{
	static int i,a[]={0,1,2,3,4};
	int *p[]={a,a+1,a+2,a+3,a+4};
	for(i=0;i<5;i++)
	printf("%u %u %d\n",p+i,*p+i,*(*p+i));

}