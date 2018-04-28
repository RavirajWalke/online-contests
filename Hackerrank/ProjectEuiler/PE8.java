import java.util.*;
import java.io.*;

import java.math.*;
class PE8
{
	public static void main(String args[])
	{
		int t,T;
		Scanner sc=new Scanner(System.in);
		T=sc.nextInt();
		for(t=0;t<T;t++)
		{
			int N,K,i;
			N=sc.nextInt();
			K=sc.nextInt();
			String s1=new String();
			s1=sc.next();
			long p1[]=new long[N-K];
			for(i=0;i<(N-K);i++)
			{
				String s2=new String();
				s2=s1.substring(i,(i+K));
				long p=1,r;
				long l=Long.parseLong(s2);
				while(l!=0)
				{
					r=l%10;
					p=p*r;
					l=l/10;
				}
				p1[i]=p;
				if(i>=1)
				{
					if(p1[i]>=p1[i-1])
						p1[i-1]=-1;
					else
					{
						p1[i]=p1[i-1];
						p1[i-1]=-1;
					}
				}
			}
			for(i=0;i<(N-K);i++)
			{
				if(p1[i]!=-1)
					System.out.println(p1[i]);
			}
		}
	}
}
	