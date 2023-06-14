import java.util.*;abstract class parent{
	abstract void greet();	void findAvg(double a, double b)	{
		System.out.println("Avg : " + ((a+b)/2));
    }}class child extends parent{
	void greet()	{
		System.out.println("Hello world this is JAVA!");
	}	void strConcat(String a, String b)	{		System.out.println("Concatinated String : " + a + b);	}}class p15{
	public static void main(String [] args)	{		child c = new child();		c.greet();		c.findAvg(24, 30);		c.strConcat("Trust ", "the Process");	}
}