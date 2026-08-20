import java.util.Scanner;

public class sec
{
	public static void main(String v[])
	{
	 Scanner obj=new Scanner (System.in);

	int h,m,s;
	
	
	System.out.println("enter second");
	 s=obj.nextInt();

	h=s/3600;
	s=s%3600;

	m=s/60;
	s=s%60;

	
	System.out.println(h+":"+m+":"+s);

	}
}
