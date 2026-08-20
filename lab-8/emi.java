import java.util.Scanner;
import java.lang.Math;
public class emi
{
	public static void main(String v[])
	{
	 Scanner obj=new Scanner (System.in);

	double p,r,n,emi;

	System.out.println("enete p");
	p=obj.nextDouble();

	
	System.out.println("enete r");
	r=obj.nextDouble();

	
	System.out.println("enete n");
	n=obj.nextDouble();

	emi=(p*r*(Math.pow((1+r),n) / (Math.pow((1+r),n))-1)));

	
	System.out.println("EMI"+emi);

	}
}

