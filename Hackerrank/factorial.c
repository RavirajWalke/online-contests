#include<stdio.h>
int fact(int);
void main()
{
	int a,f;
	printf("enter value of a");
	scanf("%d",&a);
	f=fact(a);
	printf("factorial of %d",f);
}
int fact(int i)
{
   int f;
   if(i==1)
   	return (1);
   else
   f=i*fact(i-1);
   return (f);
}