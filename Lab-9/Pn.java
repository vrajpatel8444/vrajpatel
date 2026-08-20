import java.util.Scanner;

public class Pn

{
	public static void main(String v[])
	
	{
		Scanner obj=new Scanner(System.in);
	
	int num;
	
	System.out.println("enter a number");
	 num=obj.nextInt();

	if(num>0)
	{
		System.out.println("positive ");
	}
	else if (num<0)
	{
		System.out.println("negative");
	}

	else
	{
		System.out.println("zoer");
	}
        }
}