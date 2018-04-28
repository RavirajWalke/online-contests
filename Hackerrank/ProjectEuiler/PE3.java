import java.util.*;
import java.math.*;
class PE3
{
	public static void main(String args[])
	{
	  String s1;
	  int t,T,k;
	  BigInteger N,i,j,r,R,LP=BigInteger.ZERO;
	  Scanner sc=new Scanner(System.in);
	  T=sc.nextInt();
	  for(t=0;t<T;t++)
	  {
	  	s1=sc.next();
	  	N=new BigInteger(s1);
	  	i=new BigInteger("3");
	  	while(i.compareTo(N)==-1||i.compareTo(N)==0)
	  	{
	  		k=0;
	  		R=N.remainder(i);
                        if(R.compareTo(BigInteger.ZERO)==0)
                        {
                        	j=BigInteger.ONE;
                        	while(j.compareTo(i)==-1||j.compareTo(i)==0)
                        	{
                        		r=i.remainder(j);
                        		if(r.compareTo(BigInteger.ZERO)==0)
                        		{
                        			k++;	
                        		}   
                                j=j.add(BigInteger.ONE);
                            }
                            if(k==2)
                            	LP=i;
                        }
                        i=i.add(BigInteger.ONE);
	  	}
	  	System.out.println(LP);
                
	  }
    }
}