import java.util.Scanner;

public class Mfeet
{
	public static void main(String v[])
	{
	 Scanner f=new Scanner (System.in);

	int meter;
	double feet;

	System.out.println("enter meter");
	 meter=f.nextInt();

	feet=meter * 3.28084;
	
	System.out.println("feet ="+feet);
	}
}


	