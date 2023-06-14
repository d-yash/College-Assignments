import java.util.*;

class demo
{
	int x;
	demo()
	{
		x = 0;
	}
	demo(int a)
	{
		x = a;
	}
	void findSqaure()
	{
		System.out.println("\nSquare : " + x*x);
	}
}

class p5
{
	public static void main(String [] args)
	{
		Scanner sc = new Scanner(System.in);
		System.out.print("Enter the number : ");
		int temp = sc.nextInt();
		demo d1 = new demo();
		demo d2 = new demo(temp);
		d1.findSqaure();
		d2.findSqaure();
	}
}