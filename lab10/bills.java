import java.util.Scanner;

public class bills
{
	public static void main(String v[])

	{
		Scanner obj=new Scanner(System.in);

	int call;
	double bill;
	
	System.out.println("enter call num");
	 call=obj.nextInt();
	
	if(call<=100)
		bill=200;

	else if(call <=150)
		bill=200+(call-100) * 0.60;

	else if(call <=200)
		bill=200+(50 * 0.60)+(call - 150) * 0.50;

	else 
		bill=200+(50 * 0.60)+(50 * 0.50)+(call - 200)*0.40;


	System.out.println("Bills ="+bill);	 

	}
}