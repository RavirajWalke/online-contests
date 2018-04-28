#include<stdio.h>
#include<math.h>
int main()
{
    int n,k,i,j,max=-1,maxi,sum=0;
    scanf("%d%d",&n,&k);
    int a[n],b[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
        if(abs(b[i])>max)
        {
            max=b[i];
            maxi=i;
        }
    }
    if(b[maxi]>0&&a[maxi]>0)
        a[maxi]-=k*2;
    else if(b[maxi]<0&&a[maxi]>0)
        a[maxi]+=k*2;
    else if(b[maxi]>0&&a[maxi]<0)
        a[maxi]-=k*2;
    else
        a[maxi]+=k*2;
    for(i=0;i<n;i++)
    {
     sum+=a[i]*b[i];
    }
    printf("%d",sum);
    return 0;
}
