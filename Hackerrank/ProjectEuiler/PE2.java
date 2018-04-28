import java.util.*;
import java.math.*;
class PE2
{
	public static void main(String args[])
	{
	  String s1;
	  int i,T;
	  BigInteger q,N,f1,r,f2,sum;
	  Scanner sc=new Scanner(System.in);
	  T=sc.nextInt();
	  for(i=0;i<T;i++)
	  {
	  	sum=BigInteger.ZERO;
	  	s1=sc.next();
	  	N=new BigInteger(s1);
	  	f1=BigInteger.ONE;
	  	f2=new BigInteger("2");
	  	BigInteger d=new BigInteger("2");
	  	
	  	while(f2.compareTo(N)==-1)
	  	{
	  		q=f2;
	  		f2=f1.add(f2);
	  		f1=q;
	  		r=f1.remainder(d);
	  		if(r.compareTo(BigInteger.ZERO)==0)
	  		{
	  			sum=sum.add(f1);
	  		}
	  	}
	  	System.out.println(sum);
	  	
	  }
	}
}