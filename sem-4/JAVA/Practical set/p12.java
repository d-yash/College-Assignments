import java.util.*;class parent{
	void print()	{		System.out.println("This is parentClass method");	}
}class child extends parent{	void print()	{		System.out.println("This is ChildClass method overidding parentClass method");	}}class p12{
	public static void main(String [] args)	{
		child c = new child();		c.print();
	}	
}