import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class MarsExp {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        String S = in.next();
        int n=S.length();
        int nsig=n/3;
        int i,count=0;
        String Es="SOS";
        for(i=1;i<nsig;i++)
         {
            Es=Es.concat("SOS");
        }
        if(!S.equals(Es))
        {
        	for(i=0;i<n;i++)
        	{
        		if(S.charAt(i)!=Es.charAt(i))
        		{
        			count++;
        		}
        	}
        	System.out.println(count);
        }
        else
        	System.out.println(count);
    }
}
