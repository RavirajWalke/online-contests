/**
 *
 * @author Ravi
 */
#include<stdio.h>
int main()
{
 int N,i,j,k=3,l=1,s;
 scanf("%d",&N);

 for(i=1;i<=N;i++)
 {
     for(j=1;j<=i;j++)
     {
         s=(l*2)*k;
         printf("%05d ",s);
         l++;
         k+=4;
     }
     printf("\n");
 }
 return 0;
}
