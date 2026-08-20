import java.util.Scanner;

public class p2
{
	public static void main(String v[])
	{
	Scanner obj=new Scanner(System.in);

	int n,i;
	int fact=1;

	System.out.println("enter n");
	 n=obj.nextInt();

	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	
	System.out.println("fact="+fact);
	}
}

