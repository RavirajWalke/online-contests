package Day_30;
import java.util.Scanner;
class Person {
	protected String firstName;
	protected String lastName;
	protected int idNumber;
	
	// Constructor
	Person(String firstName, String lastName, int identification){
		this.firstName = firstName;
		this.lastName = lastName;
		this.idNumber = identification;
	}
	
	// Print person data
	public void printPerson(){
		 System.out.println(
				"Name: " + lastName + ", " + firstName 
			+ 	"\nID: " + idNumber); 
	}
	 
}
class Student extends Person
{
	private int[] testScores;
	Student(String firstName, String lastName, int identification,int s[])
	{
		super(firstName, lastName, identification);
		testScores=s;
	}
	char calculate()
	{
		int tot=0;
		for(int x:testScores)
		{
			tot=tot+x;
		}
		double av=tot/testScores.length;
		if(av<40)
			return ('T');
		else if(av<55)
			return('D');
		else if(av<70)
			return('P');
		else  if(av<80)
			return('A');
		else if(av<90)
			return('E');
		else
			return('O');
		
	}
}

class Day12Inheritance {
	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		String firstName = scan.next();
		String lastName = scan.next();
		int id = scan.nextInt();
		int numScores = scan.nextInt();
		int[] testScores = new int[numScores];
		for(int i = 0; i < numScores; i++){
			testScores[i] = scan.nextInt();
		}
		scan.close();
		
		Student s = new Student(firstName, lastName, id, testScores);
		s.printPerson();
		System.out.println("Grade: " + s.calculate());
	}
}