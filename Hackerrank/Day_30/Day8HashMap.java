package Day_30;

import java.util.HashMap;
import java.util.Map;
import java.util.Scanner;

public class Day8HashMap
{
	public static void main(String args[])
	{
		Map<String,String> phonebook=new HashMap<String,String>();
		/*myMap = new LinkedHashMap<String, String>(); change myMap to be a
         new (completely different) String to String LinkedHashMap instead*/
		Scanner sc=new Scanner(System.in);
		int N=sc.nextInt();
		for(int i=0;i<N;i++)
		{
			String name=sc.next();
			String no=sc.next();
			phonebook.put(name, no);
		}
        while(sc.hasNext())
		{
			String name=sc.next();
			if(phonebook.containsKey(name))
				System.out.print(name+" = "+phonebook.get(name)+"\n");
			else
				System.out.println("Not Found");
		}
	}
}
