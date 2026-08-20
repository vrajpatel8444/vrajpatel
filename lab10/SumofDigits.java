import java.util.Scanner;

public class  SumofDigits
{
	public static void main(String v[])

	{
		Scanner obj=new Scanner(System.in);
	int sum=0,num;

	
	System.out.println("enter number");
	 num=obj.nextInt();

	while(num>0)
	{
		sum=sum+(num % 10);
		num=num/10;
		
	}
	
	
	System.out.println("sum="+sum);
	
	}
}