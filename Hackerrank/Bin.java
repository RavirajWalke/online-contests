import java.util.Scanner;
public class Bin
{
static void number(int n,int j)
{
  int i=0,k;
    int b[]=new int[100];
    while (n!=0)
    {        
        b[i]=n%j;
        n=n/j;
        i++;
    }
    
    for(k=i;k>=0;k--)
    {   
        if(b[k]>9)
        {
            System.out.printf("%c",((65-10)+b[k]));
        }
        else
        System.out.print(b[k]);
    } 
    System.out.println("");
}
public static void main(String args[])
{
    int num,base;
  Scanner s=new Scanner(System.in);
    System.out.println("enter a number");
    num=s.nextInt();  
    //base=s.nextInt();
    System.out.print("binary number is: ");
    number(num,2);
    System.out.print("octal number is : " );
    number(num,8);
    System.out.print("hexadecimal number is : " );
    number(num,16);
}  
}
