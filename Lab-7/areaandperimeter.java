import java.util.Scanner;

public class areaandperimeter
{
	public static void main(String v[])
	{
		Scanner obj=new Scanner(System.in);
	
	double s,l,w,sa,sp,ra,rp;
	
	System.out.println("enter side sqare:");
	s=obj.nextDouble();

	sa=s*s;
	sp=4*s;

	System.out.println("Square Area = " + sa);
        System.out.println("Square Perimeter = " + sp);

	
	System.out.println("enter length of rectangle:");
	l=obj.nextDouble();

	System.out.println("enter width of rectangle:");
	w=obj.nextDouble();
	
	ra=l*w;
	rp=2*(l+w);

	System.out.println("Square Area = " + ra);
        System.out.println("Square Perimeter = " + rp);

	}
}
