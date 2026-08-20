import java.util.Scanner;

public class Twonum
{
	public static void main(String r[])
	{
		Scanner obj=new Scanner(System.in);
	
	double a,b,v;
	

	System.out.println("enter a number");
	 a=obj.nextInt();
	
	System.out.println("enter b number");
	 b=obj.nextInt();

	v=a+b;
		System.out.println("add"+v);
	v=a-b;
		System.out.println("Subtraction"+v);
	v=a*b;
		System.out.println("Multiplication"+v);
	v=a/b;
		System.out.println("Division"+v);

	}
}


	

	
