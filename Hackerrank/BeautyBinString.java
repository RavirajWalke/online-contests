/*
 * @author RaviRaj96
 */
import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class BeautyBinString
{
	public static void main(String args[])
	{
		Scanner sc=new Scanner(System.in);
		int n=sc.nextInt();
		String B=sc.next();
		int count=0,i=0;
		while(i<n-2)
		{
			if(B.substring(i,i+3).equals("010"))
			{
				count++;
				i=i+3;
			}
			else
				i++;
		}
		System.out.println(count);
	}
}
