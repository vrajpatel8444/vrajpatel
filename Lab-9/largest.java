import java.util.Scanner;

public class  largest
{
	public static void main(String r[])
	{
		Scanner obj=new Scanner(System.in);

	int a,b,c;
	
	System.out.println("enter a");
	 a=obj.nextInt();

	System.out.println("enter b");
	 b=obj.nextInt();

	System.out.println("enter c");
	 c=obj.nextInt();

	if(a>b)
	{
		if(a>c)
		{
			System.out.println("a  largest ");
		}
		
		else
		{
			System.out.println("c  largest ");
		}
	
	}
	else
	{
		if(b>c)
		{
			System.out.println("b  largest ");
		}
		
		else
		{
			System.out.println("c  largest ");
		}

	}

	}
}