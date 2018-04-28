import java.io.*;
import java.util.*;
import java.math.*;

public class ModFibbo {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
       BigInteger t,a,b;
        String s1,s2,s3;
        int i,n;
        Scanner sc=new Scanner(System.in);
        s1=sc.next();
        s2=sc.next();
        a=new BigInteger(s1);
        b=new BigInteger(s2);
        n=sc.nextInt();
        for(i=2;i<n;i++)
       {
          t=b;
          b=a.add(b.multiply(b));
          a=t;
     }
    System.out.println(b);
        
    }
}