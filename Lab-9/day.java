import java.util.Scanner;

public class day
{
	public static void main(String r[])
	{
		Scanner obj=new Scanner(System.in);

	int y,w,d;

	System.out.println("enter a day");
	 d=obj.nextInt();

	y=d/365;
	d=d%365;

	w=d/7;
	d=d%7;
	
	System.out.println("year ="+y);
	System.out.println("week ="+w);
	System.out.println("day ="+d);

	}
}