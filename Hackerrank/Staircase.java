import java.util.*;
import java.lang.*;
class Staircase
{
	public static void main(String args[])
	{
		int N,i,j,k;
		Scanner sc=new Scanner(System.in);
		N=sc.nextInt();
		//l=Math.ceil(N/2.0);
		for(i=N;i>0;i--)
	    {
		   for(k=1;k<i;k++)
			  System.out.print(" ");
		   for(j=N;j>=i;j--)
		   {
			   System.out.print("#");
		   }
		   System.out.println("");
	    }
	}
}