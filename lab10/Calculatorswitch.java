import java.util.Scanner;

public class Calculatorswitch
{
	public static void main(String v[])

	{
		Scanner obj=new Scanner(System.in);

	int num1,num2,ans,ch;
	
	System.out.println("enter num1");
	 num1=obj.nextInt();

	System.out.println("enter num2");
	 num2=obj.nextInt();


	System.out.println("enter choice 1addition,2subtraction,3multiplication,4divison,5modulo");
	  ch=obj.nextInt();

	switch(ch)
	{
		case 1:
		ans=num1+num2;
		System.out.println("addition"+ans);
		break;

		case 2:
		ans=num1-num2;
		System.out.println("subtraction"+ans);
		break;

		case 3:
		ans=num1*num2;
		System.out.println("multiplication"+ans);
		break;

		case 4:
		ans=num1/num2;
		System.out.println("divison"+ans);
		break;

		case 5:
		ans=num1%num2;
		System.out.println("modulo"+ans);
		break;

	}


	}
}	 


