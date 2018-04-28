#include<stdio.h>
int main()
{
    int p,n,po=1,i;
    scanf("%d%d",&n,&p);
    for(i=1;i<=p;i++)
    {
        po =po*n;
        printf("%d\t",po);
    }
    return 0;
}
