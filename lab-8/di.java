import java.util.Scanner;
import java.lang.Math;

public class di
{
	public static void main(String r[])
	{
		Scanner obj=new Scanner(System.in);
	
	double x1,x2,y1,y2,ans;
	

	System.out.println("enter x1 number");
	 x1=obj.nextDouble();
	
	System.out.println("enter x2 number");
	 x2=obj.nextDouble();

	
	System.out.println("enter y1 number");
	 y1=obj.nextDouble();

	
	System.out.println("enter y2 number");
	 y2=obj.nextDouble();



	ans=Math.sqrt(Math.pow((x2-x1),2)+Math.pow((y2-y1),2));
	
	

	System.out.println("ans"+ans);
	}
}


	