import java.util.*;interface printStudentData{	void printWeight();	void printHeight();	void printBloodGroup();}interface greeting{	void printGreet();	void hello();}class stdData implements printStudentData, greeting{	double weight, height;	String bloodG;	Scanner sc = new Scanner(System.in);	void setData()	{		System.out.print("Enter the Weight (in kg) : ");		weight = sc.nextDouble();		System.out.print("Enter the Height (in cm) : ");		height = sc.nextDouble();		System.out.print("Enter the Blood group : " );		bloodG = sc.next();	}	public void printWeight()	{		System.out.println("Weight : " + weight + " kg");	}	public void printHeight()
	{
		System.out.println("Height : " + height + " cm");
	}	public void printBloodGroup()
	{
		System.out.println("Blood group : " + bloodG);
	}	public void printGreet()	{		System.out.println("How are you ?");	}	public void hello()	{		System.out.println("Hello!!");	}	void print()	{		printGreet();		hello();		printWeight();		printHeight();		printBloodGroup();	}}class p11{
	public static void main(String [] args)	{		stdData sd = new stdData();		sd.setData();		sd.print();	}
}