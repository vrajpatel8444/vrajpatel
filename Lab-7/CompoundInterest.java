import java.util.Scanner;

public class CompoundInterest
{
	public static void main(String v[])
	{
		Scanner obj=new Scanner(System.in);

		double p,r,t,ci;

	System.out.print("Enter Principal Amount: ");
        p = obj.nextDouble();

        System.out.print("Enter Rate of Interest: ");
        r = obj.nextDouble();

        System.out.print("Enter Time (Years): ");
        t = obj.nextDouble();
	
	ci=p*Math.pow((1+r/100),t);
	
	System.out.println("Compound Amount = " + ci);

	}
}