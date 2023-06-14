import java.util.*;

class arithmetic
{
	void getAddition(int x, int y)
	{
		System.out.println("Addition : " + (x+y));
	}
	void getSubtraction(int x, int y)
	{
		System.out.println("Subtraction : " + (x-y));
	}
	void getMulti(int x, int y)
	{
		System.out.println("Multiplication : " + (x*y));		
	}
	void getDivision(int x, int y)
	{
		System.out.println("Division : " + ((double)x/y));
	}
	void getModulo(int x, int y)
	{
		System.out.println("Modulo : " + (x%y));
	}
}
class p2
{
	public static void main(String [] args)
	{
		Scanner sc = new Scanner(System.in);
		System.out.print("Enter the fisrt number : ");
		int x = sc.nextInt();
		System.out.print("Enter the second number : ");
		int y = sc.nextInt();
		

		arithmetic ar = new arithmetic();
		ar.getAddition(x, y);
		ar.getSubtraction(x, y);
		ar.getMulti(x, y);
		ar.getDivision(x, y);
		ar.getModulo(x, y);
	}
}