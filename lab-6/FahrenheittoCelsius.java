import java.util.Scanner;
	
public class  FahrenheittoCelsius
{
	public static void main(String v[])
	{
		Scanner fc=new Scanner(System.in);
	
	System.out.print("Enter temperature in Fahrenheit: ");
	double f= fc.nextDouble();

	int c=(f-32) * 5 / 9;

	System.out.println("celsius =" +c);
	}
}
