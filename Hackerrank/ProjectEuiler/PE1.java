import java.util.*;
import java.math.*;
class PE1
{
	public static void main(String args[])
	{
	String s1;
	int i,T;
	BigInteger sum,num,N,L1,L2,L3,n1,n2,n3,sum1,sum2,sum3;
	Scanner sc=new Scanner(System.in);
	T=sc.nextInt();
	for(i=0;i<T;i++)
	{
	   s1=sc.next();
	   num=new BigInteger(s1);
	   N=num.subtract(BigInteger.ONE);
	   L1=N.subtract(N.remainder(BigInteger.valueOf(3)));
	   n1=N.divide(BigInteger.valueOf(3));
	   L2=N.subtract(N.remainder(BigInteger.valueOf(5)));
	   n2=N.divide(BigInteger.valueOf(5));
	   L3=N.subtract(N.remainder(BigInteger.valueOf(15)));
	   n3=N.divide(BigInteger.valueOf(15));
	    sum1=(n1.multiply(L1.add(BigInteger.valueOf(3))).divide(BigInteger.valueOf(2)));
	   	sum2=(n2.multiply(L2.add(BigInteger.valueOf(5))).divide(BigInteger.valueOf(2)));
	   	sum3=(n3.multiply(L3.add(BigInteger.valueOf(15))).divide(BigInteger.valueOf(2)));
	    sum=sum1.add(sum2.subtract(sum3));
	    System.out.println(sum);
	}
	}
}