import java.util.Scanner;
	
public class BMI
{
    public static void main(String v[])
	{
		Scanner b=new Scanner(System.in);

	 System.out.print("Enter weight in pounds: ");
        double p = b.nextDouble();

        System.out.print("Enter height in inches: ");
        double i = b.nextDouble();

	double kg=p * 0.45359237;
	double meter=i *  0.0254;

	double bmi=kg/(meter * meter);
	
	System.out.println("BMI = " + bmi);

	}
}
