import java.util.*;class cLang{
	final int keywords = 32;	final void details()	{		System.out.println("C was invented by Dennis Ritchie in 1972");	}
}class cpp extends cLang{
	keywords = 95; 		//this will through the error
	void details()		//this will through the error
	{
		System.out.println("Cpp was invented by Bjarne Stroustrup in 1980");
	}}final class java
{
	void javaPrint()
	{
		System.out.println("Hello world this is JAVA");
	}
}class js extends java	//this will through the error{
	void jsPrint()	{ 		System.out.prinln("Hello web this is JAVA SCRIPT");	}
}class p14{
	public static void main(String [] args)	{			}
}