package Day_30;
import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;


class Difference
{
  	private int[] elements;
  	public int maximumDifference=0;
	Difference(int []a)
	{
		elements=a;
	}
	//int b=0;
	void computeDifference()
	{
		for(int i=0;i<elements.length;i++)
		{
			for(int j=i+1;j<elements.length;j++)
			{
				int c=Math.abs(elements[j]-elements[i]);
				if(c>=maximumDifference)
					maximumDifference=c;
			}
		}//for
	}
} // End of Difference class

public class Day14Scope
{
  public static void main(String[] args)
  {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] a = new int[n];
        for (int i = 0; i < n; i++) {
            a[i] = sc.nextInt();
        }
        sc.close();

        Difference difference = new Difference(a);

        difference.computeDifference();

        System.out.print(difference.maximumDifference);
    }
}
