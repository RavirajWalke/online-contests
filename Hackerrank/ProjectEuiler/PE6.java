import java.util.*;
import java.math.*;
class PE6
{
	public static void main(String args[])
	{
	  int t,T;
	  Scanner sc=new Scanner(System.in);
	  T=sc.nextInt();
	  for(t=0;t<T;t++)
	  {
	  	String s1;
	  	BigInteger N,D,sum1,sum2,sum;
	  	BigInteger d=new BigInteger("2");
	  	BigInteger s=new BigInteger("6");
	  	s1=sc.next();
	  	N=new BigInteger(s1);
	  	sum1=((N.multiply(N.add(BigInteger.ONE))).multiply(N.multiply(d).add(BigInteger.ONE))).divide(s);
	  	sum2=((N.multiply(N.add(BigInteger.ONE))).divide(d)).multiply((N.multiply(N.add(BigInteger.ONE))).divide(d));
	  	sum=sum2.subtract(sum1);
	  	System.out.println(sum);
	  }
	}
}