import java.util.*;class bank{
	double getIntRate(){return 0;}
}class SBI extends bank{	double getIntRate(){return 5.5;}}class HDFC extends bank{	double getIntRate(){return 7.3;}}class ICICI extends bank{
	double getIntRate(){return 6.9;}
}class p16{
	public static void main(String [] args)	{		bank b;		b = new SBI();		System.out.println("SBI : " + b.getIntRate());		//will return the int rate of SBI		b = new HDFC();		System.out.println("HDFC : " + b.getIntRate());		//will return the int rate of HDFC		b = new ICICI();		System.out.println("ICICI : " + b.getIntRate());	//will return the int rate of ICICI	}
}