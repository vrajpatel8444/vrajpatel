import java.util.Scanner;

public class sumthree
{
	public static void main(String v[])
	{
		Scanner st = new Scanner(System.in);

	System.out.println("enter 1st number:");
	int a= st.nextInt();

	System.out.println("enter 2nd number:");
	int b= st.nextInt();

	System.out.println("enter 3rd number:");
	int c= st.nextInt();

	int sum = a + b + c;

	System.out.println("sum ="+ sum);

	}
}