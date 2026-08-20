import java.util.Scanner;

public class swapnum2
{
	public static void main(String v[])
	{
		Scanner sn=new Scanner(System.in);

	int a,b;

	System.out.println("enter 1st number:");
	a=sn.nextInt();

	System.out.println("enter 2nd number:");
	b=sn.nextInt();

	a=a+b;
	b=a-b;
	a=a-b;

	System.out.println("After swaping");
	System.out.println("a ="+a);
	System.out.println("b ="+b);

	}
}