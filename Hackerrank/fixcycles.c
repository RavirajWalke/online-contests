#include<stdio.h>
void main()
{
	int a,b,c,d,e,f,s1,s2,s3,p,p1,p2,p3;
	scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
	s1=a+b+c+d;
	s2=a+b+f;
	s3=a+d+e;
	if(s1>0&&s2>0&&s3>0)
		p=0;
	else
	{
	if(s1<0)
	p1=-s1;
    else
    	p1=0;
	if(s2<0)
	p2=-s2;
    else
    	p2=0;
	if(s3<0)
	p3=-s3;
    else
    	p3=0;
    if(p1>=p2&&p1>=p3)
	p=p1;
	else if(p2>=p1&&p2>=p3)
	p=p2;
	else
 	p=p3;
    }
	
	printf("%d",p);
}