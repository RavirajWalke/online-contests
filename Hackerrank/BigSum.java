import java.io.*;
import java.util.*;
import java.math.*;

public class BigSum {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        //BigInteger MAX=BigInteger.valueOf(10);
        BigInteger [] arr=new BigInteger[10];
         BigInteger sum=BigInteger.ZERO;
        int i,n;
        String []s=new String[10];
        Scanner sc=new Scanner(System.in);
        n=sc.nextInt();
        for(i=0;i<n;i++)
        {
            s[i]=sc.next();
            arr[i]=new BigInteger(s[i]);
            sum=sum.add(arr[i]);
        }
        System.out.println(sum);
    }
}