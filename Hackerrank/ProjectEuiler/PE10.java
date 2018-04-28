import java.util.*;
import java.math.*;
class PE10
{
	public static void main(String args[])
	{
		int t,k,T;
		Scanner sc=new Scanner(System.in);
		T=sc.nextInt();
		for(t=0;t<T;t++)
		{
			String s1;
			BigInteger N,i,j,R;
			s1=sc.next();
			N=new BigInteger(s1);
			i=BigInteger.ONE;
			BigInteger sum=BigInteger.ZERO;
			while(i.compareTo(N)==-1||i.compareTo(N)==0)
			{
				k=0;
				j=BigInteger.ONE;
            while(j.compareTo(i)==-1||j.compareTo(i)==0)
            {
                R=i.remainder(j);
                if(R.compareTo(BigInteger.ZERO)==0)
                   k++;	
                j=j.add(BigInteger.ONE);
            }
            if(k==2)
            {
            	sum=sum.add(i);
            }
            i=i.add(BigInteger.ONE);
	  	  }
	  	  System.out.println(sum);
		}
	}
}