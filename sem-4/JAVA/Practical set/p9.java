import java.util.*;class outterClass{
	int a = 9;	void printA()	{		System.out.println("Value of A : " + a);		innerClass ic = new innerClass();		ic.printB();	}	class innerClass	{		int b = 12;		void printB()		{			System.out.println("Value of B : " + b);		}	}
}class p9{
	public static void main(String [] args)	{
		outterClass oc = new outterClass();		// outterClass.innerClass in = outterClass.new innerClass();		oc.printA();	}
}