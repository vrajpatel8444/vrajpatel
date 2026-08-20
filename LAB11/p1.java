import java.util.Scanner;

public class p1
{
	public static void main(String v[])
	{
	Scanner obj=new Scanner(System.in);

	int s,e,i;

	System.out.println("enter s");
	 s=obj.nextInt();

	System.out.println("enter e");
	 e=obj.nextInt();

	for(i=s;i<=e;i++)
	{
		if(i%2==0 && i%3!=0)
		{
		System.out.println("number="+i);
		}

	}
	}
}