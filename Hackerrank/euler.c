#include<stdio.h>
#include<math.h>
int main()
{
   float M;
   int A,T,i;
   scanf("%d",&T);
   for(i=0;i<T;i++)
   {
     scanf("%d %f",&A,&M);
     float Y=(M-1)/2;
     printf("%d\n",Y);
     float Z= pow(A,Y);
       printf("%f\n",Z);
	 if(Z % M==1)
	 printf("YES");
	if(Z % M==(M-1))
	 printf("NO");
   }
}