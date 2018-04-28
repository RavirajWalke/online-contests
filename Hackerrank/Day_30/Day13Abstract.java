package Day_30;
import java.util.Scanner;
abstract class Book
{
    String title;
    String author;
    Book(String t,String a){
        title=t;
        author=a;
    }
    abstract void display();


}
class MyBook extends Book
{
	int price;
    MyBook(String t,String a,int price)
    {
        super(t,a);
        this.price=price;
    }
    void display()
    {
    	System.out.println(super.title);
    	System.out.println(super.author);
    	System.out.println(price);
    }
}
public class Day13Abstract
{
	public static void main(String []args)
	   {
	      Scanner sc=new Scanner(System.in);
	      String title=sc.nextLine();
	      String author=sc.nextLine();
	      int price=sc.nextInt();
	      Book new_novel=new MyBook(title,author,price);
	      new_novel.display();
	      
	   }
}
