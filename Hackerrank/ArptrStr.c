#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
	char *name[5];
	char n[10];
	int i,len;
	char *p;
	for(i=0;i<5;i++)
	{
		printf("enter name\n");
		scanf("%s",&n);
		len=strlen(n);
		p=(char *)malloc(len+1);
		strcpy(p,n);
		name[i]=p;
	}
	printf("names are:\n");
	for(i=0;i<5;i++)
	{
		printf("%s\n",name[i]);
	}
}