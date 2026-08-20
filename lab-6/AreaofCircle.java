import java.util.Scanner;

public class AreaofCircle
{
	public static void main(String v[])
	{
		Scanner ac=new Scanner(System.in);

	System.out.println("enter Area of Circle");
	double a=ac.nextDouble();
	
	double r=Math.sqrt(a/3.14);
	double d= 2 * r;

	System.out.println("Diameter ="+d);
	}
}