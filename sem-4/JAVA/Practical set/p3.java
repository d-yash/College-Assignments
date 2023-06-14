import java.util.*;

class p3
{
	public static void main(String [] args)
	{
		//String str = args[1];
		double a = Double.parseDouble(args[0]);
		double b = Double.parseDouble(args[1]);
		double c = Double.parseDouble(args[2]);
		
		//System.out.println("String : " + str);
		if(a>=b && a>c)	
			System.out.println(a + " is Maximum");
		else if(b>=c && b>a)
			System.out.println(b + " is Maximum");
		else if(c>=a && c>b)
			System.out.println(c + " is Maximum");
		else
			System.out.println("All numbers are equal");
	}
}