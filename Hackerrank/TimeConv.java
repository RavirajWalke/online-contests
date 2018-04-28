import java.util.*;
import java.math.*;
class TimeConv
{
	public static void main(String args[])
	{
	String s1,s2,s3,s4,s5;
	Scanner sc=new Scanner(System.in);
	s1=sc.next();
	int len=s1.length();
	s3=s1.substring(0,2);
	int n=Integer.parseInt(s3);
	s4=s1.substring(2,len-2);
	s5=s1.substring(len-2);
	if(s5.compareTo("AM")==0)
	{
		if(s3.compareTo("12")==0)
		{
			s3="00";
		}
	}
	else
	{
		if(s3.compareTo("12")!=0)
		{
		    n=n+12;
		    s3=n+"";
		}
	}
	System.out.println(s3+s4);
    }
}