import java.util.Scanner;

public class sub
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
	
	}
}

	