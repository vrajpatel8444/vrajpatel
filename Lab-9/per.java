import java.util.Scanner;

public class per
{
	public static void main(String r[])
	{
		Scanner obj=new Scanner(System.in);
	
	int s1,s2,s3,s4,s5,total;
	double per;

	System.out.println("enter 1-subjects");
	 s1=obj.nextInt();
	
	System.out.println("enter 2-subjects");
	 s2=obj.nextInt();

	System.out.println("enter 3-subjects");
	 s3=obj.nextInt();
	
	System.out.println("enter 4-subjects");
	 s4=obj.nextInt();

	System.out.println("enter 5-subjects");
	 s5=obj.nextInt();

	total=s1+s2+s3+s4+s5;
	per=total/5;

	
	System.out.println("total="+total);
	System.out.println("per="+per);


	if(per > 90)
		System.out.println(" A+ grade");

	else if(per >=80)
		System.out.println(" A grade");
	
	else if(per >=70)
		System.out.println(" B+ grade");
	
	else if(per >=60)
		System.out.println(" B grade");
	
	else if(per >=50)
		System.out.println(" C grade");

	else if(per >=35)
		System.out.println(" P grade");
	
	else
		System.out.println("FT");
	
	}
}

	