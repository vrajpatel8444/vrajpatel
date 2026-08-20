import java.util.Scanner;

public class age
{
	public static void main(String v[])
	{
	 Scanner obj=new Scanner (System.in);
		
	int day,age;

	System.out.println("enter birth year");
	 day=obj.nextInt();

	age=2026-day;

	System.out.println("age"+age);
	}
}


