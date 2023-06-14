import java.util.*;class p18{	public static void main(String [] args)	{
		try{
			int a = 10, b = 0;			System.out.println("Division : " + (a/b));			int arr[] = {24, 30, 2436};			System.out.println("5th element : " + arr[5]);
		}		catch(ArithmeticException e)		{
			System.out.println("Can't Divide the number with zero");
		}		try{
			int arr[] = {24, 30, 2436};
			System.out.println("5th element : " + arr[5]);			
		}		catch(ArrayIndexOutOfBoundsException e)		{
			System.out.println("Array don't have that much elements");
		}
	}}