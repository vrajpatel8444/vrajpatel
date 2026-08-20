import java.util.Scanner;

public class swapnum
{
	public static void main(String v[])
	{
		Scanner sn=new Scanner(System.in);

	int a,b,temp;

	System.out.println("enter 1st number:");
	a=sn.nextInt();

	System.out.println("enter 2nd number:");
	b=sn.nextInt();

	temp=a;
	a=b;
	b=temp;

	System.out.println("After swaping");
	System.out.println("a ="+a);
	System.out.println("b ="+b);

	}
}